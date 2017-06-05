#include <stdio.h>
int main()
{
  float notas[4][3], media=0;
  int i, j, mat;
  
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=2;j++)
    {
      printf("\nEntre com a av%d do aluno%d :", j+1, i+1);
      scanf("%f", &notas[i][j]);
    }
    printf("\n");
  }
  //imprimir todas as notas da av1
  printf("\nNotas da av1");
  for(i=0;i<=3;i++)
  {
    printf("\nAluno%d - %.2f", i+1, notas[i][0]);
  }
  
  //pedir matricula e imprimir notas com resultado  
  printf("\nEntre com a matricula[1-4]: ");
  scanf("%d", &mat);
  i=mat-1;
  
  media = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;
  printf("\nNotas do aluno%d", mat);
  
  for(j=0;j<=2;j++)
  {
    printf("\nAV%d = %.2f", j+1, notas[i][j]);
  }
  printf("\nMedia final = %.2f", media);  
  
  return 0;
}