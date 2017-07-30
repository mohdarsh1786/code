#include<bits/stdc++.h>
#define long long long int
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {long n,a=1,b=2,p=3,r=2;
        cin>>n;
            for(long i=0;i<n;i++)
            {
              if(i==0)
                {
                    cout<<p<<" ";
                }
                else
                {
                    p+=r;
                    cout<<p<<" ";
                }
            }

        cout<<endl;
    }
}

