#include<iostream>
#include<list>
#include<cstdlib>
using namespace std;
int main()
{
    int x;
    list<int> arra;
    list<int> list2(5);
    for(int i=0;i<10;i++)
    {
      cin>>x;
      arra.push_back(x);
    }
      list<int>:: iterator p;
   /* for(p=list1.begin();p!=list1.end();p++)
    {

        cout<<*p<<" ";
    }*/
    cout<<arra.size();
    cout<<"after sorting"<<endl;
     for(p=arra.begin();p!=arra.end();p++)
    {

        cout<<*p<<" ";
    }


}
