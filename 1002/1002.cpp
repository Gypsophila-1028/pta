#include <stdio.h>
int main ()
{
    int sum=0,i=0,n,s=0,b=0,c=0;
    char a[101]={};
    while(1)  //求位数
    {
        scanf("%c",&a[i]);
        if(a[i]>='0'&&a[i]<='9')
        {
            i++;
        }
        else break;
    }
    a[i]='\0';
    i=0;


    while(a[i]!='\0')  //求累计值
    {
        sum=sum+a[i]-'0';
        i++;
    }
    n=sum;  //累计值

    while(1)  //求累计值的位数
    {
        s++;  //位数
        n/=10;
        if(n==0) break;
    }
    n=sum;

    while(n)
    {
        b*=10;
        b=b+n%10;
        n/=10;
    }

    while(s)
    {
        if((b%10>=0&&b%10<=9)&&s!=1)
        {
            switch (b%10)
            {
                case 0:printf("ling ");break;
                case 1:printf("yi ");break;
                case 2:printf("er ");break;
                case 3:printf("san ");break;
                case 4:printf("si ");break;
                case 5:printf("wu ");break;
                case 6:printf("liu ");break;
                case 7:printf("qi ");break;
                case 8:printf("ba ");break;
                case 9:printf("jiu ");break;
            }
        }
        else
            switch (b%10)
            {
                case 0:printf("ling");break;
                case 1:printf("yi");break;
                case 2:printf("er");break;
                case 3:printf("san");break;
                case 4:printf("si");break;
                case 5:printf("wu");break;
                case 6:printf("liu");break;
                case 7:printf("qi");break;
                case 8:printf("ba");break;
                case 9:printf("jiu");break;
            }
        b/=10;
        s--;
    }

    return 0;
}

