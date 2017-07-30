#include<stdio.h>
int linear_search(int a[],int value,int ele);
int main()
{

     int value,a[100],i;
     int ele,ammount;
     printf("how many element you want in the array:-");
   	 scanf("%d",&value);
     printf("enter the array element-:\n");
    for(i=0;i<value;i++)
  	 scanf("%d",&a[i]);
  	 printf("which element you want to search:-");
  	 scanf("%d",&ele);
  	 ammount= linear_search(a,value,ele);
    if(ammount==-1)
       printf("%d number is not found in the array:",ele);
    else
       printf("%d number is found at position %d\n",ele,ammount);
       return 0;
  }

int linear_search(int a[],int value,int ele)
   {
      int i=0;
      while(i<value&&ele!=a[i])
         i++;
       if(i<value)
        return i;
        else
        return -1;


   }


