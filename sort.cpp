#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int n,i;
    cin>>n;
    vector <int> arr(n);
    vector <int> arr2(n);
    int c=INT_MAX;
    int b=INT_MAX;
    int k=INT_MAX;
    int h=INT_MAX;
    long long int  r=0,t=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(c>arr[i])
        {
            c=arr[i];
            r=i;
        }
    }
    for(long long int  j=0;j<n;j++)
    {
        cin>>arr2[j];
        if(b>arr2[j] && r!=j)
        {
           b=arr2[j];
        }
        if(k>arr2[j])
        {
            k=arr2[j];
            t=j;
        }
    }
    for(long long int  o=0;o<n;o++)
    {
        if(h>arr[o] && t!=o)
        {
            h=arr[o];
        }
    }
    long long int  s=k+h;
    long long int  d=b+c;
    if(s>=d)
    {cout<<d;
    }
    else
    {
        cout<<s;
    }
}
