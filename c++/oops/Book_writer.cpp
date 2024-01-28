#include<iostream>
using namespace std;
class Book{
    public:
    int bookid;
    string bookname;
    int price;
    void input(){
    cout<<"Enter the bookid"<<endl;
    cin>>bookid;
    cout<<"Enter the bookname"<<endl;
    cin>>bookname;
    cout<<"Enter the book price"<<endl;
    cin>>price;
    }
    void show(){
        cout<<"BOOK id:"<<bookid<<endl;
        cout<<"Price"<<price<<endl;
        cout<<"Bookname"<<bookname<<endl;
    }
};
class writer