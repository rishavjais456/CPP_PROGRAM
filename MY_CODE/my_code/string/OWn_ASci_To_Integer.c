#include<stdio.h>
int fun(char*name){
    int ans=0;
    int sign=1;
    int i=0;
    if(name[0]=='-'){
    sign=-1;
    i++;
    }
    
    for(;i<name[i]!='\0';i++){
        ans=ans*10+name[i]-'0';                            /// asci od 0 is 48;
    }
    return sign*ans;
}
int main(){
    char name[]="-1245";
    int value=fun(name);
    printf("%d",value);
    return 0;
}