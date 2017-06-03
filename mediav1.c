#include <stdio.h>

int main()
{
  float av1[5];
  float soma, media;
  int i, maior=0;
  
  media=0;soma=0;
  for(i=0;i<5;i++)
  {
    printf("\nEntre com a AV1 do aluno %d:", i+1);
    scanf("%f", &av1[i]);
    soma = soma + av1[i]; 
  }
  media = soma / i;
  printf("\nMedia = %.2f", media);
  
  for(i=0;i<5;i++)
  {
    if(av1[i] > media)
    {
      maior++;
    }
  }
  
  printf("\nNumero de alunos com nota acima da media da turma = %d\n\n", maior);
  
  return 0;
}