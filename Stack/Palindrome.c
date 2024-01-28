 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 int stack[50];
 int top=-1;
 int front=0;
 void push(char ch){
    if(top==49){
        printf("Stack is full");
        exit(0);
    }
    top++;
    stack[top]=ch;
 }
 void pop(){
    if(top==-1){
    printf("empty stack");
    exit(0);
    }
    top--;
 }
 int main(){
    char ch[50];
    printf("Entet the string");
    scanf("%s",ch);
    for(int i=0;ch[i]!='\0';i++){
        push(ch[i]);
    }
    
    for(int i=0;i<strlen(ch)/2;i++){
        if(stack[top]!=stack[front]){
            printf("Not palindrome");
            exit(0);
        }
      
       pop();
        front++;
       
    }
    printf("Palindrome");
    return 0;

 }