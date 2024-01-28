#include<stdio.h>
struct stack{
    int top;
    int arr[5];
};
typedef struct stack Stack;
void push(Stack *s){
    int n;
    printf("enter number to push\n");
   
    if(s->top==5){
        printf("overflow");

    }
    else{
         scanf("%d",&n);
        s->top=s->top+1;

        s->arr[s->top]=n;
    }
    return;
    }
    void pop(Stack *s){
        if(s->top==-1){
            printf("Stack is empty");
        }
        else{
            s->top=s->top-1;
        }
        return;
    }
void display(Stack s){
    if(s.top==-1){

        printf("stack in empty");
    }
    else{
        for(int i=s.top;i>=0;i--){
            printf("%d ",s.arr[i]);
        }
    }
}
int main(){
   Stack s;
   s.top=-1;
   push(&s);
    push(&s);
     push(&s);
   display(s);
   pop(&s);
   printf("\n");
   display(s);
   return 0;

}