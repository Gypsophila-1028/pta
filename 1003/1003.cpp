//#include <iostream>
//#include <map>
//using namespace std;
//int main()
//{
//    int n, p = 0, t = 0;
//    string s;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> s;
//        map<char, int> m;
//        for (int j = 0; j < s.size(); j++)
//        {
//            m[s[j]]++;
//            if (s[j] == 'P') p = j;
//            if (s[j] == 'T') t = j;
//        }
//        //p代表"P"之前A的数量，（t-p-1）代表"P"和"T"之间A的数量，s.length()-t-1代表"T"以后的A的数量
//        if (m['P'] == 1 && m['A'] != 0 && m['T'] == 1 && m.size() == 3 && t - p != 1 &&
//            p * (t - p - 1) == s.length() - t - 1)
//            printf("YES\n");
//        else
//            printf("NO\n");
//    }
//    return 0;
//}


#include <iostream>
#include <cstring>
#define LEN 101
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char str[LEN];
        cin>>str;
        int pos_p,pos_t;//P和T的位置（下标）
        int num_p=0,num_t=0;//P和T的个数
        int flag=1;//初始假设答案正确
        for(int j=0;j<strlen(str);j++){
            //存在除P、A和T外的其他字符，则不正确
            if(str[j]!='P'&&str[j]!='A'&&str[j]!='T'){
                flag=0;
                break;
            }
            if(str[j]=='P'){
                num_p++;
                pos_p=j;
            }
            if(str[j]=='T'){
                num_t++;
                pos_t=j;
            }
        }
        //正确答案中P和T都有且仅有一个，且P和T之间不能没有A
        if(num_p!=1||num_t!=1||pos_t-pos_p==1)
            flag=0;
        else{
            int mid_a=pos_t-pos_p-1;//P和T之间的A的数量
            int left_a=pos_p;//P左侧的A的数量
            int right_a=strlen(str)-pos_t-1;//T右侧的A的数量
            //由题找规律可知，正确答案中左边的A的数量×中间的A的数量＝右边的A的数量
            if(left_a*mid_a!=right_a)
                flag=0;
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

