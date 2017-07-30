#include<bits/stdc++.h>
#include<map>
using namespace std;

 int count1(char str[],int p)
 {
   unordered_map <string , int> m;
   for(int i=0;i<p;i++)
        m[str[i]]++;
   int res=0;
   for(auto it=m.begin();it!=m.end();it++)
   {
       if(it->second==2)
         res++;
   }


    return res;
 }


 int main()
  {
    string str[]={"love","hate","love","hate","love","pease"};
    int n=sizeof(str)/sizeof(str[0]);
    cout<<count1(str,n);
    return 0;
  }
