#include <stdio.h>
int main()
{
   char letra;
  
   printf("\nDigite uma letra:");
   scanf("%c", &letra);
  
   if( letra>=65 && letra<=90)
   {
     printf("\nEsta letra é MAIUSCULA!!!");
   }
   else if(letra>=97 && letra<=122)
   {
     printf("\nEsta letra é minuscula!!!");
   }
   else if(letra>=48 && letra<=57)
   {
     printf("\nIsto é um dígito numérico!!!");
   }
  
   return 0;
  
}