#include <stdio.h>
int main()
{
  float av1[10];
  float media=0, soma=0;
  int i;
  
  for(i=0;i<=9;i++)
  {
    printf("\nEntre com a nota do aluno %d: ", i+1);
    scanf("%f", &av1[i]);
    soma = soma + av1[i];
  }
  media = soma/ i;
  printf("\nMedia = %.2f \n", media);
  return 0;
}