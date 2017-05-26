#include <stdio.h>
int main()
{
  float av1, av2, media;
  printf("\nEntre com a av1:");
  scanf("%f", &av1);
  printf("\nEntre com a av2:");
  scanf("%f", &av2);
  
  media = (av1+av2)/2;
  printf("\nMedia igual a %.1f", media);
  if (media >= 6.0)
  {
    printf("\nVoce passou!!");
  }
  else
  {
    printf("\nVoce precisa da av3!!");
  }
  
  return 0;
}