   #include<iostream>
   using namespace std;
   int main()
   {
      int arr[10][10];
      int row;
      int col;
      int key;
      cout<<"Enter row and col\n";
      cin>>row;
      cin>>col;
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
      }
      //printing the array
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
      cout<<"Enter the key element to search:"<<endl;
      cin>>key;
      int s=0;
      int e=row*col-1;
      int mid=s+(e-s)/2;
      while(s<e){
       int element=arr[mid/col][mid%col];
       if(element==key){
        cout<<"Element found"<<endl;
        exit(0);
       }
       else if(element>key)
       s=mid+1;
       else
       e=mid-1;
       mid=s+(e-s)/2;
       
      }
      cout<<"Element not present";
      return 0;

   }