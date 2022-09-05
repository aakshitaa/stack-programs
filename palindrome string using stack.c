#include<stdio.h>
#include<string.h>
#define MAX 10
char QUEUE[MAX];
int FRONT=-1,REAR=-1;

void push(char ch){
    QUEUE[REAR++]=ch;
}
char pop(){
    return QUEUE[FRONT++];
}
void palindrome(char str[]){
    int len=strlen(str);
    int i;
    for(i=0;i<(len/2);i++){
        push(str[i]);
    }
    i=0;
    while(i<(len/2)){
        char chr=pop();
        if(chr!=str[len-i-1]){
            printf("Given string is not palindrome\n");
            return;
        }
        i++;
    }
    printf("Given string is palindrome \n");
}
int main(){
    char str[MAX];
    printf("Enter the string to check if palindrome or not:\n");
    scanf("%s",&str);
    palindrome(str);
    return 0;
}