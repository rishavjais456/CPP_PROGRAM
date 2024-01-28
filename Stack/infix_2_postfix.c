#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100
char infix[MAX_SIZE];
char postfix[MAX_SIZE];
char stack[MAX_SIZE];
int top=-1;
int precedence(char symbol){
    switch(symbol){
        case '^':return 3;
        case '/':
        case '*':return 2;
        case '+':
        case '-': return 1;
        default: return 0;
       
    }
}
void push(char c){
    if(top==MAX_SIZE-1){
    printf("overflow");
    exit(0);
    }
    top++;
    stack[top]=c;
}
char pop(){
   
    if(top==-1){
        printf("underflow");
        exit(0);
    }
   return stack[top--];
}
int isempty(){
    return (top==-1);
}
void intopost(){
    char symbol;
    char next;
    int j=0;
    for(int i=0;i<strlen(infix);i++){
    symbol=infix[i];
 
    switch(symbol){
        case '(':
        push(symbol);
        break;
        case ')':
        while((next=pop())!='('){
            postfix[j++]=next;
        }
        break;
        case'+':
        case'-':
        case'*':
        case '/':
        case '^':
        while(!isempty() && precedence(stack[top])>=precedence(symbol)){
            postfix[j++]=pop();
        }
        push(symbol);
        break;
        default:
        postfix[j++]=symbol;
    }
    }
    while(!isempty()){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
}

void print(){
    int i=0;
    while(postfix[i]!='\0'){
        printf("%c",postfix[i++]);
    }
}
int main(){
    printf("Enter the infix expression\n");
    fgets(infix,MAX_SIZE,stdin);
    intopost();
    print();
    return 0;
}