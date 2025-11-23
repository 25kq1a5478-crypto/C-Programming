//write a program to print individual digits to sum of a given number
#include<stdio.h>
#include<conio.h>
void main()
{
  int r,n,sum=0;
  clrscr();
  scanf("%d",&n);
  while(n>0)
  {
  r=n%10;
  printf("%d\n",r);
  sum=sum+r;
  n=n/10;
  }
  printf("%d",sum);
  getch();
  }
  