#include <stdio.h>

int factorial(int n) {
   if(n == 0) {
      return 1;
   } else {
      return n * factorial(n-1);
   }
}

int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int main() {
   int n;
   int i;

   do{
      printf("\n\n---------------------------------\n");
      printf("\n\nDigite o limite: \n");
      scanf("%d", &n);
      
      printf("limite: %d\n", n);

      printf("Factorial of %d: %d\n" , n , factorial(n));
      printf("Fibbonacci of %d: " , n);
      
      for(i = 0;i<n;i++) {
         printf("%d ",fibbonacci(i));            
      }
   }while(n != 0);

   return 0;
}