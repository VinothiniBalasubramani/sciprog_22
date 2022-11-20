#include <stdio.h>

int main(void)
{
   int num1, num2, error;

   printf("Please input two positive integers\n");
   error = scanf("%d %d",&num1,&num2);//getting input from user
   if (error != 2) { //Condition for getting two numbers
     printf("Please try again\n");
     return 1;
   }

   if (num1<=0 || num2<=0) { //condition for negative numbers
     printf("These numbers are not positive!\n");
     return 1;
   }

   printf(" You entered %d and %d\n",num1,num2); //using the input in print function
   //Conditions to find even or odd
   if (num1%2 == 0) { 
      printf(" num1 is even and");
   } else {
      printf(" num1 is odd and");
   }

   if (num2%2 == 0) {
      printf(" num2 is even\n");
   } else {
      printf(" num2 is odd\n");
   }
   printf("\n");


  return 0;
}



