//write a program to print numbers between lower limit and upper limit 
#include<stdio.h>
#include<conio.h>
void main()
{
  int lower,upper;
  clrscr();
  scanf("%d%d",&lower,&upper);
  while(lower<=(upper-1))
  {
  printf("%d ",lower);
  lower++;
  }
  printf("%d",upper);
  getch();
  }
  