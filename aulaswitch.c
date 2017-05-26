#include <stdio.h>
/* exemplo de comando
switch
*/
int main()
{
  int num;
  printf("\nEntre com um numero de 1 a 3:");
  scanf("%d", &num);
  
  switch(num)
  {
      case 1:
         printf("\nOpcao 1 foi escolhida");
         break;
      case 2:
         printf("\nOpcao 2 foi escolhida");
         break;
      case 3:
         printf("\nOpcao 3 foi escolhida");
         break;
    default:
      printf("\nOpcao invalida!!");
  }
  
  return 0;
}