#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,i,j;
    cin>>a;
    vector<int> arr(a);
    for(i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    cin>>b;
    vector<int> arr2(b);
     for(i=0;i<b;i++)
    {
        cin>>arr2[i];
    }
    sort(arr.begin(),arr.end());
    sort(arr2.begin(),arr2.end());

    /* for(i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<b;i++)
    {
        cout<<arr2[i] <<" ";
    }*/
    int s;
    if(a>b)
    {
        s=a;
    }
    else{
        s=b;}
        int k,l=0;
        for(k=0,j=0;j<s;)
        {
            if(arr[k]!=arr2[j])
            {
                if(l!=arr2[j])
                {
                    cout<<arr2[j]<<" ";
                }
                l=arr2[j];
                j++;
            }
            else{k++,j++;}
        }
}
