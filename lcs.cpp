#include<bits/stdc++.h>
using namespace std;
int lcs(string x,string y,int m,int n)
{
    int L[m+1][n+1];
    int i,j;
    for(i=0;i<=m;i++)
        for(j=0;j<=n;j++)
    {
        if(i==0 || j==0)
            L[i][j]=0;
        else if(x[i-1]==y[j-1])
        {
            L[i][j]=L[i-1][j-1]+1;
        }
        else
        {
            L[i][j]=max(L[i][j-1],L[i-1][j]);
        }
    }
  /* for(i=0;i<=m;i++)
        for(j=0;j<=n;j++)
            cout<<L[i][j]<<" ";
    //cout<<L[m][n];*/
  return L[m][n];

}
int main()
{
    int a,b;
     string sr1,sr2;
     cin>>sr1>>sr2;
   //  cout<<sr1<<sr2;
     a=sr1.length();
     b=sr2.length();
     int p=lcs(sr1,sr2,a,b);
    cout<<p;
}














