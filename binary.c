#include<stdio.h>
int binary_search(int arry[],int num,int elem);
void main()
{
   int arry[100],num,elem,i;
   int index;
      printf("How many element you want in array:");
      scanf("%d",&num);
      printf("enter the array elements(in sorted order):\n");        /* ELEMENT MUST BE SORTED ORDER*/
    for(i=0;i<num;i++)
      scanf("%d",&arry[i]);
      printf("enter the element to be search:-");
      scanf("%d",&elem);
      index=binary_search(arry,num,elem);

    if(index==-1)
     printf("%d number is not found in array:-\n",elem);
    else
      printf("%d number is found in the array at position %d\n:-",elem,index);
   }

 int binary_search(int arry[],int num,int elem)
 {
     int low=0,up=num-1,mid;

      while(low<=up)
      {
        mid=(low+up)/2;
         if(arry[mid]==elem)
        {
            return mid;          /*search in left half*/
        }
       else if(elem>arry[mid])
        {
             low=mid+1;
           }
           else{
            up=mid-1;
           }             /*search in right half*/

   }
    return -1;

 }
