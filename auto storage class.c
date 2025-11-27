#include<stdio.h>
#include<conio.h>
void main()
{
  auto int mainvar;
  void printnum();
  clrscr();
  mainvar=10;
  printnum();
  printf("\n in main:%d",mainvar);
  }
  
  void printnum()
  {
  int mainvar;
   printf("in printnum:%d",mainvar);
   getch();
   }