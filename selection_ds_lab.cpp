#include<iostream>
#include<stdio.h>
#include<string.h>
#define M 100
using namespace std;

int sum(char *x)
{
    int i=0,s,sum=0;
    while(x[i]!='\0')
    {
        s=x[i];
        sum=sum+s;
        i++;
    }
    return sum;
}

void sort_fn(char x[][M],int n)
{
    int i,j,mi,sum1,sum2;
    char a[M];
    for(i=0;i<n-1;i++)
    {
        mi=i;
        for(j=i+1;j<n;j++)
        {
            sum1=0;sum2=0;
            sum1=sum(x[mi]);
            sum2=sum(x[j]);
            if(sum1>sum2)
                mi=j;
        }
        strcpy(a,x[i]);
        strcpy(x[i],x[mi]);
        strcpy(x[mi],a);
    }
}


void read(char nm[][M],int n)
{
    int i;
  for(i=0;i<n;i++)
    {
        getchar();
        cin.get(nm[i],M,'\n');
    }
}

int check(char nm[][M],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;nm[i][j]!='\0';j++)
        {
            if((nm[i][j]<97 || nm[i][j]>122) && (nm[i][j]<65 || nm[i][j]>90))
                    return 0;
        }
    }
    return 1;
}

int main()
{
    char nm[M][M];
    int i,n;
    cout<<"How many names : ";
    cin>>n;
    read(nm,n);
    if(check(nm,n))
    {
        sort_fn(nm,n);
        cout<<"Names : "<<endl;
        for(i=0;i<n;i++)
        {
            cout<<nm[i]<<endl;
        }
    }
    else
        cout<<"Characters not entered properly.";
    return 0;
}
