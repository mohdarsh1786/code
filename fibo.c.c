#include<stdio.h>
void main()
{
	int num1,num2,a=1,b=0,c;
	printf("enter two positive number:");
	scanf("%d%d",&num1,&num2);
	if(num1<0||num2<0)
    {
        printf("error press positive number\n");
        return 0;
    }
	do
          {
	   c=a+b;
	   if(c>=num1&&c<=num2)
          {
		printf("%d\n",c);

	}
              a=b;
	      b=c;
     }
         while(num2>=c);
}

