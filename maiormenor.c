#include <stdio.h>
int main()
{
  //delcara as variaveis
  int num, resp, maior, menor;
  menor=9999;
  maior=-9999;
  do
  {
    printf("\nEntre com um numero:");
    scanf("%d", &num);
    
    //calcula o maior e o menor numero
    if(num>maior)
      maior = num;
    
    if(num<menor)
      menor = num;
    
    //pergunta se desejar continuar pedindo numero
    printf("\nDeseja continuar(1-s/2-n)?");
    scanf("%d", &resp);
  }while(resp == 1);
  printf("\nMaior numero = %d", maior);
  printf("\nMenor numero = %d\n\n", menor);
  
  return 0;
}