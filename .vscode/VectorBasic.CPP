#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;                                                                                       //decalaration of vector
    cout<<"Size: "<<v.size()<<endl;                                                            
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(1);                                                                                      //add elements from back
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
 
 v.push_back(2);
  cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
  cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    
    v.resize(8);                                                                                       //resize the vector by 8
     cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.pop_back();                                                                                     //delete from back
   
        cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;


     return 0;
}