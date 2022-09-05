#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top=0;
void push(int n)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=top;
    top=newnode;
    printf("element %d is added \n",newnode->data);
}
void pop()
{
    struct node *temp;
    temp=top;
    if(top==0)
    printf("oops!the stack is empty \n");
    else
    {
        printf("element %d is deleted \n",top->data);
        top=top->next;
        free(temp);
    }
}
int main()
{
   int ch=0,t=0;
   printf("enter number of times you want to operate stack: \n");
   scanf("%d",&t);
   for(int i=0;i<t;i++)
   {
   printf("enter choice as 1 for push and 2 for pop: \n");
   scanf("%d",&ch);
   if(ch==1)
   {
       int n=0;
       printf("enter element to push \n");
       scanf("%d",&n);
       push(n);
   }
   else if(ch==2)
   {
       pop();
   }
   else
   printf("invalid choice entered \n");
    }
    return 0;
}