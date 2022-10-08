#include <stdio.h>
int main()
{
    int sum=0,i=0,n=0,test,b=0;
    char a[101]={};
    while(1)
    {
        scanf("%c",&a[i]);
        if(a[i]>='0'&&a[i]<='9')
            i++;
        else break;
    }
    a[i]='\0';
    i=0;

    while(a[i]!='\0')
    {
        sum+=a[i]-'0';
        i++;
    }
    test=sum;

    while(1)
    {
        n++;
        test/=10;
        if(test==0)  break;
    }
    test=sum;

    while(test)
    {
        b*=10;
        b+=test%10;
        test/=10;
    }
    sum=b;

    while(n)
    {
        if((sum%10<=9&&sum%10>=0)&&n!=1)
            switch(sum%10)
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
        else
            switch(sum%10)
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
        sum/=10;
        n--;
    }
    return 0;
}
