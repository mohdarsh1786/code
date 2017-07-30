//#include<bits/std.c++>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t,m,n;
    cin>>t;
    while(t--)
    {
        int count1=0,s[3];
        cin>>m>>n;
        int a[n];
        for(int i=1;i<=n;i++)
        {
           cin>>a[i];
        }
        for(int j=1;j<=n && m>0;j++)
        {
            if(m%a[j]==0)
            {
                m=m-a[j];
                s[count1]=j;
                count1++;
            }
            if(count1==2)
            {
                break;
            }

        }
        for(int k=0;k<2;k++)
        {
            cout<<s[k]<<" ";
        }
        cout<<endl;
    }

}
