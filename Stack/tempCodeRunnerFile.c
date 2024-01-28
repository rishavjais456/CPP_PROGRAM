#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack[10];
char infix[10];
char postfix[10];
int top=-1;
void push(char symbol){
  if(top==10){
    printf("Stack is full");
    exit(0);
  }
  top++;
  stack[top]=symbol;
}
char pop(){
  if(top==-1){
    printf("stack is empty");
    exit(0);
  }
  return stack[top--];
}
int isempty(){
  return (top==-1);
}
int precedence(char symbol){
  switch(symbol){
    case '+':
    case '-': return 3;
    case '*':
    case '/':return 4;
    case '^':return 5;
    default:
    return 0;
  }
}
void intoPost(){
  char symbol,next;
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
       case '+':
       case '-':
       case '/':
       case '*':
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
  printf("Enter the postfix expression\n");
  fgets(infix,10,stdin);
  intoPost();
  print();
  return 0;
}