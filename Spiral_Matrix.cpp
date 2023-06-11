#include<iostream>
using namespace std;
int main()
{
    
   int a[10][10],row,col;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    cout<<"Enter the number of column:"<<endl;
    cin>>col;
    
    int startingfRow=0;
    int startinCol=0;
    int endingRow=row-1;
    int endingCol=col-1;
    int count=0;
    int total;
   
    total=row*col;
    //input of matrix
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j]; 
        }
    }    
    //printing the matrix
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //printing first row
    while(count<total){
    for(int index=startinCol;count<total && index<=endingCol;index++){
        cout<<a[startingfRow][index]<<" ";
        count++;
    }
    startingfRow++;
//printing last col
for(int index=startingfRow;count<total && index<=endingRow;index++){
    cout<<a[index][endingCol]<<" ";
        count++;
}
endingCol--;

//printing last row
for(int index=endingCol; count<total && index>=startinCol;index--){
    cout<<a[endingRow][index]<<" ";
        count++;
}
endingRow--;
//printing first col;
for(int index=endingRow; count<total && index>=startingfRow;index--){
    cout<<a[index][startinCol]<<" ";
        count++;
}
startinCol++;
   
    }
    return 0;
    } 
