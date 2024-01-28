#include<stdio.h>
struct stack{
    int top;
    int arr[3];
}s;
void Convert(int x){
    int i=2;
    while(x!=0){
        // push(x%2);
        printf("%d",x%2);
       x=x/2;
    }
}
int main(){
    int x;
    printf("Entr decimal number to convert bunary:\n");
    scanf("%d",&x);
    Convert(x);
    return 0;
}