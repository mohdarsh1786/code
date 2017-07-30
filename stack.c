#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 struct arraystack
     {
       int top;
       int capacity;
       int  *array;
     };
   struct arraystack* createstack(int cap)
       {
         struct arraystack *stack;
         stack=malloc(sizeof(struct arraystack));
         stack->top=-1;
         stack->capacity=cap;
         stack->array=malloc(sizeof(int)*stack->capacity);
         return(stack);
        }
  int isfull(struct arraystack *stack)
      {
        if(stack->top==stack->capacity-1)
            return(1);
        else
            return(0);
      }
   int isempty(struct arraystack *stack)
       {
          if(stack->top==-1)
              return(1);
          else
              return(0);
        }
    void push(struct arraystack *stack,int item)
        {
            if(!isfull(stack))
              {
                stack->top++;
                stack->array[stack->top]=item;
              }
       }
     int pop(struct arraystack *stack)
         {
            int elem;
           if(!isempty(stack))
               {
                 elem=stack->array[stack->top];
                  stack->top--;
                return(elem);
               }
         return(-1);
         }
       int peek(struct arraystack *stack)
       {
           int item,s;
             s=stack->top;
             stack->top=0;
           item=stack->array[stack->top];
           while(s>stack->top)
             {
               if(stack->array[stack->top]>item)
               {
                   item=stack->array[stack->top];

               }
               stack->top++;
           }
           return(item);
       }
main()
    {
    int element,item1,choice,a;
    struct arraystack *stack;
    printf("how many element you want in stack \n");
    scanf("%d",&item1);
    stack=createstack(item1);
    while(1)
        {
        scanf("%d",&choice);
        switch(choice)
            {
         case 1: scanf("%d",&element);
                   push(stack,element);
                 break;
          case 2: pop(stack);
                  break;
          case 3: a=peek(stack);
                  printf("%d",a);
                    break;
          case 4: exit(0);
                  break;
            }

         }
}

