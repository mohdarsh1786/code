#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int p=s.length();
        int flag=0,count1=0;
        for(int i=0;i<p;i++)
        {
            if(flag==0 && s[i]=='1' && s[i+1]=='0')
            {//cout<<"arsh";
                flag=1;
            }
            else if(flag==1 && s[i]=='1')
            {//cout<<"arsh";
                count1++;
                flag=0;
                i=i-1;
            }
            else if(flag==1 && s[i]!='0' && s[i]!='1')
            {//cout<<"arsh";
               flag=0;
            }
        }
        cout<<count1<<endl;

    }
}
