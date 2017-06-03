#include <stdio.h>
/*
1- Faça um programa em C para ler uma letra e dizer se é 
maiuscula ou minuscula.

2 - Complemente o programa anterior dizendo 
também se o usuário digitou um número

3- Complemente o programa anterior 
convertendo para maiuscula ou minuscula
*/
int main()
{
  char letra;
  printf("\nDigite alguma coisa:");
  scanf("%c", &letra);
  
  if(letra>=65 && letra<=90)
  {
    printf("\nVoce digitou uma letra maiuscula!\n");
    printf("\nConvertida para minuscula= %c\n\n", letra+32);
  }
  else if(letra>=97 && letra<=122)
  {
    printf("\nVoce digitou uma letra minuscula!\n");
    printf("\nConvertida para MAIUSCULA= %c\n\n", letra-32);
  }
  else if(letra>=48 && letra<=57)
    printf("\nVoce digitou um número!\n");
  
  return 0;
}