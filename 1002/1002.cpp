#include<iostream>
#include<vector>
using namespace std;

int p_number (int x)
{
    switch(x)
    {
        case 0: cout<<"ling"; break;
        case 1: cout<<"yi"; break;
        case 2: cout<<"er"; break;
        case 3: cout<<"san"; break;
        case 4: cout<<"si"; break;
        case 5: cout<<"wu"; break;
        case 6: cout<<"liu"; break;
        case 7: cout<<"qi"; break;
        case 8: cout<<"ba"; break;
        case 9: cout<<"jiu"; break;
        default: break;
    }
    return 0;
}

int count_1 (int x)//计算位数
{
    int s=0;
    do {
        s++;
        x/=10;
    }while(x);
    return s;
}

int count_2(int x,int s)//计算累计值
{
    int a,all_1=0;
    for(int i=0;i<x;i++)
    {
        a = s%10;
        s/=10;
        all_1=all_1+a;
    }
    return all_1;
}

int main ()
{
    int x,a,weishu_1,weishu_2,sum;
    cin>>x;
    weishu_1 = count_1(x);
    sum= count_2(weishu_1,x);
    weishu_2 = count_1(sum);
    vector<int>obj;
    for(int i = 0;i<weishu_2;i++)
    {
        a = sum%10;
        sum/=10;
        obj.push_back(a);
    }

    for(int i = 0;i<weishu_2;i++)
    {
        cout<<p_number(obj[i])<<" ";
    }

    return 0;
}


//
// Created by Gypsophila on 2022/10/8.
//
