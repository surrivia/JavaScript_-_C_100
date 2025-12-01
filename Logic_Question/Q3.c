//Check if a number is even or odd without using %.
#include <stdio.h>

int main() {
   printf("Enter tho number: ");
   int n , check;
   scanf("%d",&n);
   check = (n/2)*2 ;
   if (check==n)
   {
    printf("%d is Even Number " ,n);
   }
   else
   printf("%d is odd Number " ,n);
    return 0;
}