#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    if(n==1)
    printf("one");
    else if(n==2)
    printf("two");
    else if(n==3) 
    printf("three");
    else if(n==4)
    printf("four");
    else if(n==5)
    printf("five");
    else
    printf("number out of limit");
    getch();
  }