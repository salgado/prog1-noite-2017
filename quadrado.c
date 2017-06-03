#include <stdio.h>
int main()
{
    int lado, i, j;
  
    printf("\nEntre com o tamanho do lado:");
    scanf("%d", &lado);
  
    for(j=1;j<=lado;j++)
    {
      //imprime linha
      for(i=1;i<=lado;i++)
      {
        printf("*");
      }
      printf("\n");
    }
    return 0;
}