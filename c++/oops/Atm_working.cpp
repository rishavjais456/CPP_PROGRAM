#include<iostream>
using namespace std;
class ATM{
    public:
    string nameDepositor;
    int amount;
    string AccountName;
    public:
    ATM(){
        cout<<"Enter the name of depositor:"<<endl;
        cin>>nameDepositor;
        cout<<"Enter the Accoutn name:"<<endl;
        cin>>AccountName;
        cout<<"ENter the amount"<<endl;
        cin>>amount;
   }
   void Deposit(int money){
    amount+=money;
   }
   void withdraw(int x){
    if(x<=amount){
        cout<<"Amount is withdraw"<<endl;
        amount-=x;
    }
    else{
        cout<<"low balance"<<endl;
    }
   }
   void display(){
    cout<<"Name of depositor: "<<nameDepositor<<endl;
    cout<<"Account name: "<<AccountName<<endl;
    cout<<"Amount in bank: "<<amount<<endl;
   }

};
int main(){
    ATM atm;
    while(1){
        int n;
        
        cout<<"Enter the choice 1-Deposit--2-withdraw--3-display 4--exit"<<endl;
        cin>>n;
        switch(n){
            case 1:
                 cout<<"Enter the Amount for deposit:"<<endl;
                 int n;
                 cin>>n;
                 atm.Deposit(n);
                 break;
            case 2:
                 cout<<"Enter the Amount for withdraw:"<<endl;
                 int m;
                 cin>>m;
                 atm.withdraw(m);
                 break;
            case 3:
            atm.display();
            break;
            case 4:
            exit(0);
            break;
            default:
            cout<<"enter valid case:"<<endl;
   }
  }
  return 0;

}