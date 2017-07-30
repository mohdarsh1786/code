#include<bits/stdc++.h>
using namespace std;
int arr[7];
int fun(int n);
int main()
{
    long long int n;
    cin>>n;
    for(int i=n+1;;i++)
    {
        if(fun(i))
        {
            cout<<i<<endl;
            break;
        }
    }

}
int fun(int p)
{
    int rem=0;
    for(int i=0;i<6;i++)
    {
        int l=p%10;
        p=p/10;
        arr[i]=l;
    }
    if(arr[0]+arr[1]+arr[2]==arr[3]+arr[4]+arr[5])
    {
        return 1;
    }
    else{
        return 0;
    }

}
