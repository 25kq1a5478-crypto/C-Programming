//write a program to print reverse digits of a given number
#include<stdio.h>
#include<conio.h>
   int digits(int num);
   int main()
   {
   int number;
   printf("Enter a number:");
   scanf("%d",&number);
   
   printf("Individuals digits are:\n");
   digits(number);
   
   return 0;
   
   }
   
   int digits(int num)
   {
   int rev=0,digit;
   while(num>0)
   {
   digit=num%10;
   rev=rev*10+digit;
   num/=10;
   }
   
   while(rev>0)
   {
   digit=rev%10;
   printf("%d\n",digit);
   rev/=10;
   }
   }
     
    
    