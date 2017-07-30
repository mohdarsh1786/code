#include<stdio.h>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int m,n,i,j,s;
    string str;
    cin>>str;
    m=str.length();
    s=floor(sqrt(m));
    n=ceil(sqrt(m));
    if(n*s<m)
    {
        s=s+1;
    }
    for(i=0;i<m-1;i++)
    {
        j=0;
        j=i;
        if(i>=n)
        {
            break;
        }
        while(j<m)
        {
            cout<<str[j];
            j=j+n;
            //cout<<"arsh";
            if(j>m-1)
            {
                break;
            }
        }
        cout<<" ";
    }
}
