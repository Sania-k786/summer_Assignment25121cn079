#include <stdio.h>
int main() {
   int n1, n2, max, lcm;
   printf("Enter two positive integers: ");
   scanf("%d %d", &n1, &n2);
   // Start with the maximum of the two numbers
   max = (n1 > n2) ? n1 : n2;
   while (1) {
       if (max % n1 == 0 && max % n2 == 0) {
           lcm = max;
           break;
       }
       ++max;
   }
   printf("The LCM of %d and %d is %d.\n", n1, n2, lcm);
   return 0;
}
