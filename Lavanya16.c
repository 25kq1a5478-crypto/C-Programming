#include<stdio.h>
#include<conio.h>
void main()
{
  int lower,upper;
  clrscr();
  scanf("%d%d",&lower,&upper);
  if(lower<upper)
  {
  while(lower<=upper)
  {
  if(lower%2==0)
  printf("%d ",lower);
  lower++;
  }
  printf("%d",lower);
  }
  else
  {
  printf("invalid inputs");
  }
  getch();
  }
  