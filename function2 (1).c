//write a program to find sum of 1 to n numbers 
#include<stdio.h>
#include<conio.h>
int main()
{  
   int n,result;
   printf("Enter value of n:");
   scanf("%d",&n);
   result=sum(n);
   printf("\n%d",result);
   return 0;
   }
   int sum(int n)
   {
   int i,s=0;
   for(i=1;i<=n;i++)
   {
   s=s+i;
   }
   return s;
     }
    
    