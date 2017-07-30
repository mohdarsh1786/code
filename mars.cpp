#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    string str;
    char ma[3]={'S','O','S'};
    int i,j,flag=0,count1=0;
    cin>>str;
    for(i=0,j=0;i<str.length();i++){
        if(str[i]!=ma[j])
        {
            count1++;
        }
        j++;
        if(j==3)
        {
            j=0;
        }
    }
    cout<<count1;
}
