#include <stdio.h>
int main ()
{
    int a,s=0;
    scanf("%d",&a);
    if(a%2 != 0) a=a-1;
    do
    {
        s=s+a;
        a=a-2;
    }while(a!=0);
    printf("%d",s);
    return 0;
}