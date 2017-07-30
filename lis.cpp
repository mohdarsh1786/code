#include<bits/stdc++.h>
using namespace std;
int lis(vector<int> arr,int n)
{
    int l[n];
    for(int p=0;p<n;p++)
        {
            l[p]=1;
        }

    for(int i=1;i<n;i++)
     for(int j=0;j<i;j++)
    {
        if(arr[i]>arr[j] && l[i]<l[j]+1)
            {
                l[i]=l[j]+1;
            }
    }
    int max1=0;
        for(int p=0;p<n;p++)
        {
            if(max1<l[p])
                max1=l[p];
        }
        return max1;
}





int main()
{
    int n,i;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++)
        cin>>arr[i];
    int p=lis(arr,n);
    cout<<p;
}
