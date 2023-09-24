//add include statements
#include "repetition.h"

//add function(s) code here
int factorial(int num)
{
   auto product = 0;
   
   while(num > 0)
   {
      product = num * num;
      num--;
   }

   return product;
}

int gcd(int num1, int num2)
{
   auto diff = 0;
   
   while(num1 == num2)
   {
      if(num1 < num2)
      {
         num2 = num1;
      }
   }
   {
      if(num1 > num2)
      {
         diff = num2 - num1;
      }
   }
  
return num1;
}

