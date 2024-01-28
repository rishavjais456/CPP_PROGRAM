#include<iostream>
using namespace std;
void PrintPascal(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
            cout<<"   ";
        }
        int coef = 1; 
        for (int k = 1; k <= i; k++) { 
            printf("%4d", coef); 
            coef = coef * (i - k) / k; 
        } 
        printf("\n"); 
    }
}
int main(){
    int n;
    cout<<"Enter the numbr of rows"<<endl;
    cin>>n;
    PrintPascal(n);
    return 0;
}