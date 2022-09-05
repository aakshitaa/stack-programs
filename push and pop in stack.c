#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* top=NULL;
void push(int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=x;
    temp->next=top;
    top=temp;
    return;
}
void pop(){
    struct Node* temp;
    if(top==NULL){ printf("Underflow!\n"); return;}
    temp=top;
    top=top->next;
    printf("The deleted element is: %d\n",temp->data);
    free(temp);
    return;
}  
void display(){
    struct Node* temp;
    if(top==NULL){ printf("Stack is empty!\n"); return;}
    temp=top;
    printf("The stack elements are:\n");
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return;
}
int main(){
    top=NULL;
    int choice,i=0,x;
    printf("Enter choice as: \n1.To Push\n2.To Pop\n3.To Display\n4.To Exit\n");
    do{
        printf("Enter the choice:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            {
                printf("Enter data: \n");
                scanf("%d",&x);
                push(x);
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
            case 4:
            {
                break;
            }
            default:
            {
                printf("Invalid choice enterred!\n");
                break;
            }
        }
    }while(choice!=4);
    return 0;
}