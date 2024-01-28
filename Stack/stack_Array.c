#include<stdio.h>
int top=-1;
int stack_arr[4];
void push(int data){
    if(top==4){
        printf("overflow");
        return;
         }
         else{
            top=top+1;
           stack_arr[top]=data;
         }
}
void pop(){
    if(top==-1){
        printf("underflow");
    }
    else{
        top=top-1;
    }
}
void display(){
    if(top==-1){
        printf("empty stack");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d",stack_arr[i]);
        }
    }
}
int main(){
    int choice,data;
 while(1){
    printf("\nEnter the choice to perform\n");
    printf("1 :push()\n");
    printf("2 :pop()\n");
    printf("3 :Display\n");
    printf("4 :Exit()\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter element to push\n");
        scanf("%d",&data);
        push(data);
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        exit(1);
    }
 }

return 0;
}