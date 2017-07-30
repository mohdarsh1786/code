#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,m,i,a,b;
    cin>>m>>n;
    for(i=0;i<n;i++)
    { int flag=0;
        cin>>a>>b;
        if(a==m)
        {
            m=b;
            flag=1;
        }
        if(b==m && flag!=1)
        {
            m=a;
        }
    }
    cout<<m;

}
