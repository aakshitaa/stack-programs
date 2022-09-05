#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("Enter size of stack :\n");
    scanf("%d",&n);
    printf("Enter choice as \n1 for push operation\n2 for pop operation\n3 for displaying stack\n0 for exiting contro:\n");
    do{
        printf("choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 0:
            {
                break;
            }
            default:
            {
                printf ("Invalid choice entered! \n");
            }
                 
        }
    }
    while(choice!=0);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("Overflow!\n");
         
    }
    else
    {
        printf("Enter data:\n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("Underflow!\n");
    }
    else
    {
        printf("The popped elements is %d \n",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("Elements in stack are: \n");
        for(i=top; i>=0; i--)
            printf("%d\n",stack[i]);
    }
    else
    {
        printf("Stack is empty!\n");
    }
}
