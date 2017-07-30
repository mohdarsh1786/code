#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    { int i,j,flag=0;
        string str;
        cin>>str;
        int n=str.length();
        for(i=0,j=n-1;i<=n/2&&j>=0;i++,j--)
        {
            if(str[i]!=str[j])
            {
                if(str[i+1]==str[i] || str[i-1]==str[i])
                {
                    flag=1;
                    cout<<j<<endl;
                    break;
                }
                if(str[j-1]==str[j] || str[j+1]==str[j])
                {
                    flag=1;
                    cout<<i<<endl;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"-1"<<endl;
        }

    }
}
