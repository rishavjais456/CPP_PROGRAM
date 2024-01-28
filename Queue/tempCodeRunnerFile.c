#include<stdio.h>
struct Student{
   char name[20];
   int usn;
   int marks[3];
   float avg;
};
int main(){
   int x;
   printf("Entr the number of student:\n");
   scanf("%d",&x);
   struct Student stu[x];
   for(int i=0;i<x;i++){
      printf("Enter student details:\n");
      printf("Name:\n");
      scanf("%s",stu[i].name);
      printf("USN:\n");
      scanf("%d",&stu[i].usn);
      printf("Enter marks of three student:\n");
      for(int k=0;k<3;k++){
         scanf("%d",&stu[i].marks[k]);
      }
   }
   for(int i=0;i<x;i++){
     
      printf("Name:%s\nUSN: %d\n",stu[i].name,stu[i].usn);
      printf("marks: ");
      for(int j=0;j<3;j++){
         printf("Marks: %d ",stu[i].marks[j]);
      }
        printf("\n");
   }
 
   
   return 0;

}