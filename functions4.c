//write a program to print reverse digits of a given number
#include<stdio.h>
#include<conio.h>
   int reversenumber(int num);
   int main()
   {
   int number,rev;
   printf("Enter a number:");
   scanf("%d",&number);
   
   rev=reverseNumber(number);
   
   printf("Reverse of %d:%d\n",number,rev);
   
   return 0;
   }
   
   int reverseNumber(int num)
   {
   int rev=0,digit;
   while(num>0)
   {
   digit=num%10;
   rev=rev*10+digit;
   num/=10;
   }
   
   return rev;
   
   }
     
    
    