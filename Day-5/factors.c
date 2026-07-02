#include <stdio.h>
int main() {
   int num, i;
   // Prompt user for input
   printf("Enter a positive integer: ");
   scanf("%d", &num);
   // Display factors
   printf("Factors of %d are: ", num);
   for (i = 1; i <= num; ++i) {
       if (num % i == 0) {
           printf("%d ", i);
       }
   }
   return 0;
}
