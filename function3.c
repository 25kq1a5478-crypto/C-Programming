//write a program to print individual digits of a given number
#include<stdio.h>
#include<conio.h>
   int isprime(int num);
   int main()
   {
   int number;
   printf("Enter a number:");
   scanf("%d",&number);
   
   if(isprime(number))
   printf("%d is prime number\n",number);
   else
   printf("%d is not prime number\n",number);
   
   return 0;
   }
   int isprime(int num){
   if(num<=1)
   return 0;
   
   for(int i=2;i<=num/2;i++)
   {
   if(num%i==0)
   return 0;
   
   }
   return 1;
   }
   
     
    
    