#include<stdio.h>

	void main()
{
	int s[100],n,i,j,k,temp;

		printf("how many number the array element\n:-");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&s[i]);
		printf("display the array element\n");
                for(i=0;i<n;i++)
		printf("%d\n",s[i]);

              for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
	{
		if(s[i]==s[j])
	{
	   for(k=j;k<n-1;k++)
	{
		s[k]=s[k+1];
	}
	        n--;
		j--;
		}
	}
    }

      		printf("reversing the array element\n");
                for(i=0,j=n-1;i<n/2;i++,j--)
          {
		temp=s[i];
		s[i]=s[j];
                s[j]=temp;
	}
		 for(i=0;i<n;i++)
	{
		printf("%d\n",s[i]);
 	}
}

