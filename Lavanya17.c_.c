//write a program to print sum of numbers between lower and upper 
#include<stdio.h>
#include<conio.h>
void main()
{
  int lower,upper,sum;
  clrscr();
  scanf("%d%d",&lower,&upper);
  sum=0;
  while(lower<=upper)
  {
  sum=sum+lower;
  lower++;
  }
  printf("%d ",sum);
  getch();
  }
  