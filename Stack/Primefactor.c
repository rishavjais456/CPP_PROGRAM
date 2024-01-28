#include<stdio.h>
struct stack{
    int top;
    int arr[4];
};
typedef struct stack Stack;
void primefactor(Stack *s,int n){
    int i=2;
    while(n!=1){
        while(n%i==0){
           push(s,i);
            n=n/i;
        }
        i++;
    }
}
void push(Stack *s,int data){
    if(s->top==4){
        printf("stack is full");
        
    }
    else{
        s->top=s->top+1;
        s->arr[s->top]=data;
  }
}
int main(){
    Stack s;
    s.top=-1;
    int n;
    printf("Enter number to know prime factor:\n");
    scanf("%d",&n);
    primefactor(&s,n);
    while(s.top!=-1){
        printf("%d ",s.arr[s.top]);
        s.top=s.top-1;
    }
    return 0;
}