#include<stdio.h>
#include<string.h>
struct book
{
  int pages;
  char name[15];
  int price;
};
int main()
{
  struct book b1;
  b1.pages=100;
  b1.price=200;
  strcpy(b1.name,"math");
  printf("%d\n%s\n%d\n",b1.pages,b1.name,b1.price);
  return 0;
}