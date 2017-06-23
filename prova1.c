#include <stdio.h>

int main ()
{
  int i, qtdMaiorNota=0;
  float nota[10];  //[2000];
  float maior=-1;
  
  for(i=0;i<10;i++)
  {
  	printf("\nEntre com a nota do aluno %d: ", i+1);
  	scanf("%f", &nota[i]);
  	if(nota[i]>maior)
  	{
  		maior = nota[i];
	}	
  }
  
  for(i=0;i<10;i++)
  {
  	if(nota[i]==maior)
  	{
  		qtdMaiorNota++;
	}
  }
  printf("\n%d alunos tiraram a maior nota = %.2f", qtdMaiorNota, maior);
  
  return 0;
}

