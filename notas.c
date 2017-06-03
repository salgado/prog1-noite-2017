#include <stdio.h>
/*
Faça um programa para ler um nome, av1 e av2.
Calcule a media e informe como no exemplo:
Qual o seu nome: Fulano
Entre com AV1: 6.6
Entre com AV2: 6.6
Ola Fulano, sua media = 6.6
*/
int main()
{
  char nome[20];
  float av1, av2, media;
  
  printf("\nQual o seu nome: ");
  scanf("%s", nome);
  
  printf("\nEntre com AV1: ");
  scanf("%f", &av1 );
  
  printf("\nEntre com AV2: ");
  scanf("%f", &av2 );
  
  media = (av1+av2) / 2;
  printf("\nOla %s, sua media = %.1f\n\n",nome,media);
  
  return 0;
}



