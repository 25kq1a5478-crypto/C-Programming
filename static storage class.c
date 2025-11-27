#include<stdio.h>
#include<conio.h>
void main()
{
  void printnum();
  clrscr();
  printnum();
  }
  
  void printnum()
  {
   static int i=1;
   printf("%d",i++);
   if(i==6)
   exit(0);
   printnum();
   
   }