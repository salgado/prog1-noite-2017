#include <stdio.h>
int main()
{
  char letra;
  
  printf("\nDigite uma letra:");
  scanf("%c", &letra);
  
  printf("\nLetra digitada = %c - ascii=%d \n\n", letra, letra);
  
  return 0;
}