#include<iostream>
using namespace std;
int main ()
{
    int n,s=0;
    cin>>n;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            s++;
        }
        else
        {
            n = (3*n+1)/2;
            s++;
        }
    }
    cout<<s;
    return 0;
}
//
// Created by Gypsophila on 2022/10/8.
//
