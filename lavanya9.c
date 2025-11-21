//write a program given number is positive or negative or zero
#include<stdio.h>
#include<conio.h>
void main()
{
  int num;
  printf("enter a number");
  scanf("%d",&num);
  if(num>0)
  {
  printf("The number is positive\n");
  }
  else if(num<0)
  {
  printf("The number is negative\n");
  }
  else
  {
  printf("The number is zero\n");
  }
  getch();
  }
  