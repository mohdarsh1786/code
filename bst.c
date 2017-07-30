#include<stdio.h>
struct Bstnode
{
 int info;
 struct Bstnode *left;
 struct Bstnode *right;
}
void *nw_insert(struct Bstnode *root,int data)
{
 struct Bstnode *par;
 struct Bstnode *p=malloc(sizeof(struct Bstnode));
 p->left=NULL;
 p->info=data;
 p->right=NULL;
  if(root==NULL)
   root=n;
 else
 {
   par=root;
   while(par!=NULL)
   {
     if(par->info > data)
        {
         if(par->left==NULL)
              par->left=n;
          par=par->left;
        }
     else
        {
          if(par->right==NULL)
               par->right=n;
            par=par->right;
        }         
    }
  }
}
struct Bstnode *find(struct Bstnode *root,int data)
{
  if(root==NULL)
     return(NULL);
  if(data < root->data)
     return(find(root->left,data);
  if(data > root->data)
     return(find(root->right,data);
  return(root);
}        
struct Bstnode *remove(struct Bstnode *root,int data)
{
  struct Bstnode *tem;
   if(root==NULL)
     { 
       printf("ERROR!NO SUCH ELE EXIST");
     }
    else if(data < root->data)
        root->left=delete(root->left,data);
    else if(data > root->data)
        root->right=delete(root->right,data);
    else                                         //element found
    {
      if(root->left && root->right)
       {                               //WHEN BOTH CHILD FOUND 
         tem=find_max(root->left);        //create a fun which find the max
         root->data=tem->data;
         root->left=delete(root->left,root->data)
       }
      else
       {  
        tem=root;
        if(root->left==NULL)
              root=root->right;
        if(root->right==NULL)
              root=root->left;
           free(tem);               
        }
      }                //end of else statement
      return(root);
}  // end of function
int main()
{
  int a,choice;
struct Bstnode *start;
   printf("1.insert 2.find 3. delete\n:");
   scanf("%d",&choice);
  while(1)  
 { 
  switch(choice)
  {
   case 1:  printf("enter the new data");
            scanf("%d",&a)
            nw_insert(start,a);
            break;
   case 2:
          printf("enter the element you want to search\n");
              scanf("%d",&a)
           find(start,a);
           break;
    case 3:
            printf("enter the element you want to delete");
               scanf("%d",&a);
                 remove
              
