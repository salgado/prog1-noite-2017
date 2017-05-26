#include <stdio.h>

int main()
{
  //declara as variaveis
  int x;
  int y;
  int soma;
  int subtracao;
  int multiplicacao;
  float divisao;
  
  printf("Entre com o x:");
  scanf("%d", &x);
  
  printf("Entre com o y:");
  scanf("%d", &y);
  
  soma = x + y;
  printf("Soma = %d\n", soma);
  
  subtracao = x - y;
  printf("Subtracao = %d\n", subtracao);
  
  multiplicacao = x * y;
  printf("Multiplicação = %d\n", multiplicacao);
  
  divisao = (float) x / y;
  printf("Divisao = %f\n", divisao);
    
  return 0;
}
