#include<iostream>
using namespace std;
int main(){
    char name[3][20];
    for(int i=0;i<=2;i++){
        printf("enter the name");
        scanf("%s",name[i]);
    }
    for(int i=0;i<=2;i++){
       printf("Name is %s\n",name[i]);
       
    }
    printf("%c",*(name[2]+4));
    return 0;
}
