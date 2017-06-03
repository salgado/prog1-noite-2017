#include <stdio.h>
int main()
{
  float notas[4][3];
  int i, j;
  float media, maior =-2;
  
  for(i=0; i<=3; i++)
  {
    for(j=0;j<=2;j++)
    {
      printf("\nEntre com a av%d do aluno%d:", j+1, i+1);
      scanf("%f", &notas[i][j]);
    }
    printf("\n");
  }
  
  media = (notas[0][0] + notas[0][1] + notas[0][2]) / 3;
  printf("\nMedia do aluno 1 = %f", media);
  
  for(i=0;i<=3;i++)
  {
    if(notas[i][1] > maior)
    {
      maior = notas[i][1];
    }
  }
  
  printf("\nMaior nota da av2 = %.2f", maior);
  
  return 0;
}
