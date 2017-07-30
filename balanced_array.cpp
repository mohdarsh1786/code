#include <bits/stdc++.h>

using namespace std;

int solve(vector < int > a,int p){
    int d=p/2,i,j,sum=0,sum1=0,l=0;
    for(i=0,j=d;i<d,j<p;i++,j++)
    {
        sum+=a[i];
        sum1+=a[j];
    }
    if(sum>sum1)
    {
        l=sum-sum1;
    }
    else if(sum<sum1)
    {
        l=sum1-sum;
    }
    else{l=sum1-sum;}
    return l;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = solve(a,n);
    cout << result << endl;
    return 0;
}

