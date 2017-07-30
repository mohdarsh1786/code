#include<stdio.h>
int main()
{
    FILE *fp,*fp1;
    char fname[15],str[30],ch;
    int count=0,pivot,j;
    printf("ENTER THE FILE NAME:");
    scanf("%s",fname);
    printf("ENTER THE STRING THAT YOU WANT TO SEARCH:");
    scanf("%s",str);
    fp=fopen(fname,"r");
    fp1=fopen(fname,"r");
    while(!feof(fp))
    {
        ch=fgetc(fp);
        if(ch==str[0])
        {
            pivot=ftell(fp);
            fseek(fp1,0,pivot);
            for(j=1;str[j]='\0';j++)
            {

                ch=fgetc(fp1);
                if(str[j]!=ch)
                goto skip;
            }
                count++;
        }
                  skip:
    }
            printf("%d",count);
            fclose(fp);
            fclose(fp1);

}
