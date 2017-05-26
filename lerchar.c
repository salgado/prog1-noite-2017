#include <stdio.h>

int main()
{
  char letra;
  
  do{
    printf("\n1-soma 2-subtrai 3-multiplica 0-sair");
    letra = getchar();
     
  }while(letra != 65);
  
  return 0;
}