#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,b,t;
    cin>>t;
    while(t--)
    {int r=0,r1=0,q=0,p=0;
    cin>>l>>b;
    int s=l*b;
    for(int i=1;i<s;i++)
    {
        if(s%(i*i)==0)
        {//cout<<"arsh";
            r1=s/(i*i);
             p=i;
           //  cout<<p<<q;;
            if(q<p)
            {//cout<<"arsh";
                q=p;
            }
            if(i*i>=s)
                break;
        }
    }
    cout<<q+q<<endl;
  }
}
