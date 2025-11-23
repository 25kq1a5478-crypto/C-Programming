//write a program to print 1-n numbers using while
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n;
  clrscr();
  scanf("%d",&n);
  i=1;
  while(i<=(n-1))
  {
  printf("%d ",i);
  i=i+1;
  }
  printf("%d",i);
  getch();
  }
  