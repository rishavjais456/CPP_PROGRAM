#include<iostream>
using namespace std;
class Player{
    private:
    string name;
    int age;
    string Teamname;
    public:
      Player(){
       cout<<"Enter player name"<<endl;
       cin>>name;
       cout<<"enter player team"<<endl;
       cin>>Teamname;
       cout<<"Enter age"<<endl;
       cin>>age;
    }
    void input(){
        cout<<"ENter the player name:"<<endl;
        cin>>name;
        cout<<"Enter the team name"<<endl;
        cin>>Teamname;
        cout<<"enter the age"<<endl;
        cin>>age;
    }
    void change(string nam,int ag,string Teamnam){
      name=nam;
      Teamname=Teamnam;
      age=ag;
    }
    void display(){
        cout<<"player name is :"<<name<<endl;
        cout<<"team name is:"<<Teamname<<endl;
        cout<<"player age is:"<<age<<endl;
    }
    
};
int main(){
    Player p1;
    while(1){
        int n;
        cout<<"------MAIN-------"<<endl;
        cout<<"1-input the player:"<<endl;
        cout<<"2-change the player:"<<endl;
        cout<<"3-display :"<<endl;
        cout<<"4-exit"<<endl;
        cout<<"Enter the choise:"<<endl;
        cin>>n;
        switch(n){
            case 1:
            p1.input();
            break;
            case 2:
            p1.change("rishav",23,"banglore");
            break;
            case 3:
            p1.display();
            break;
            case 4:
            exit(0);
            break;
            default:
            cout<<"Enter valid case:"<<endl;
        }

    }
    return 0;
}