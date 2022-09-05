#include<stdio.h>
#include<string.h>
#define MAX 10
int top=-1;
char STACK[MAX];

void push(char ch){
    STACK[++top]=ch;
}
char pop(){
    return STACK[top--];
}
void reverse(char str[]){
    int len=strlen(str);
    for(int i=0;i<len;i++){
        push(str[i]);
    }
    char str_new[len];
    printf("String after reversing is:\n");
    for(int i=0;i<len;i++){
        str_new[i]=pop();
        printf("%c",str_new[i]);
    }
}
int main(){
    char str[MAX];
    printf("Enter the string to reverse:\n");
    scanf("%s",&str);
    reverse(str);
    return 0;
}