#include<stdio.h>
#include<stdlib.h>
int main(){
    int*num=(int*)malloc(2*sizeof(int));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i+j==5){
                num[0]=i;
                num[1]=j;
                return num;
            }
           
        }
        
    }
}