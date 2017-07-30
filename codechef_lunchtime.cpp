#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string str;
        int flag=1;
        cin>>str;
        int count1=0,count2=0;
        int n=str.length();
        for(int i=0;i<n;i++)
        {
            if(str[0]=='U')
            {
                if(str[i]=='U' && flag==1)
                {
                    count1++;
                    flag=0;
                }
                else if(str[i]=='D' && flag==0)
                {
                    count2++;
                    flag=1;
                }
            }
            else if(str[i]=='D' && flag==1)
                {
                    count1++;
                    flag=0;
                }
                else if(str[i]=='U' && flag==0)
                {
                    count2++;
                    flag=1;
                }

        }
        if(count1<count2)
        {
            cout<<count1<<endl;
        }
        else
        {
            cout<<count2<<endl;
        }

    }
}
