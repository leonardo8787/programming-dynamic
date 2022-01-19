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

int fibbonacci_topDown(int n) {
   if(n == -1){
      return (fibbonacci_topDown(n-1)+fibbonacci_topDown(n-2));
   } else {
      return n;
   }
}

int main() {
   int n;
   int i;
   int op;

   do{
      printf("\n\n---------------------------------\n");
      printf("\nDigite uma opção: \n");
      printf("1 - Recurção simples\n");
      printf("2 - Recursão topDown\n");
      scanf("%d\n", &op);
      
      switch (op)
      {
         case 1:
            printf("\nRecursão\n");
            printf("\n\nDigite o limite: \n");
            scanf("%d", &n);
            printf("limite: %d\n", n);
            printf("Factorial of %d: %d\n" , n , factorial(n));
            printf("Fibbonacci of %d: " , n);
            for(i = 0;i<n;i++) {
               printf("%d ",fibbonacci(i));            
            }
            break;
         case 2:
            printf("\nRecursão-TopDown\n");
            printf("\n\nDigite o limite: \n");
            scanf("%d", &n);
            printf("limite: %d\n", n);
            printf("Factorial of %d: %d\n" , n , factorial(n));
            printf("Fibbonacci of %d: " , n);
            for(i = 0;i<n;i++) {
               printf("%d ",fibbonacci_topDown(i));            
            }
            break;
         default:
            printf("\nescolha uma opção válida!\n");
            break;
      }
   }while(n != 0);

   return 0;
}