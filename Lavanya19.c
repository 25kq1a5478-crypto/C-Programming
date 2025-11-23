//write a program to print individual digits of a given number
#include<stdio.h>
#include<conio.h>
void main()
{
  int r,n;
  clrscr();
  scanf("%d",&n);
  while(n>0)
  {
  r=n%10;
  printf("%d\n",r);
  n=n/10;
  }
  getch();
  }
  