#include<iostream>
using namespace std;
int main(){
char b[20];
cout<<"Enter the string"<<endl;
cin>>b;
int a[256]={0};
for(int i=0;b[i]!='\0';i++){
    a[b[i]]++;
}
for(int i=0;i<256;i++){
    if(a[i]>0)
    printf("%c occue %d \n",i,a[i]);
}
return 0;
}