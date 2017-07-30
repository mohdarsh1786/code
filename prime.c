#include<stdio.h>
void main()
{
  int value,i,n,add=0;
  printf("enter the number:-");
  scanf("%d",&value);
  for(i=2;i<=value/2;i++)
  {
      if((value%i)== 0)
      {
          add++;
          break;
       }
       }
      if(add==0&&value!=1)
        printf("%d is prime  number",value);
     else
       printf("%d is not a prime number",value);

  }
