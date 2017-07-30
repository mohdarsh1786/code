#include<stdio.h>
#include<string.h>
void main()
{
  FILE *fp1,*fp2,*fp3;
  char fname[15],str1[100],str2[100],ch,ch1;
  int size;
  int pivote;
  int i;
  printf("enter the file name:\n");
  scanf("%s",fname);
  fflush(stdin);
  printf("enter the search term:\n");
  gets(str1);
  printf("enter replace term:  ");
  fflush(stdin);
  gets(str2);
  fp1=fopen(fname,"r");

  fp2=fopen("temp.txt","w");
  fp3=fopen(fname,"r");
  size=strlen(str1);
  while(!feof(fp1))
  {
      ch=fgetc(fp1);
      printf("%c",ch);
      if(ch==str1[0])
      {
        //pivote=ftell(fp1);
        //fseek(fp3,0,pivote);
        i=1;
        do
        {
            ch1=fgetc(fp1);
            printf("%c",ch1);
            if(str1[i]!=ch1)
            {

                fseek(fp1,1,-(i+1));
                goto skip;
            }
            i++;
        }while(str1[i]!='\0');
        i=0;
        do
        {
            fputc(str2[i],fp2);
            i++;

        }while(str2[i]!='\0');
        //pivote=ftell(fp3);
          //fseek(fp1,1,pivote);
          goto skip2;
          skip:
              //ch=fgetc(fp1);
            fputc(ch,fp2);
            fputc(ch1,fp2);
        skip2:
            printf("");
      }
      else
      {
          fputc(ch,fp2);

      }
      //fflush(fp1);
      //fflush(fp2);
      //fflush(fp3);

  }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    remove(fname);
    rename("temp.txt",fname);
  }
