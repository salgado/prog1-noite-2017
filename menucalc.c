#include <stdio.h>

int main()
{
  int menu;
  
  do{
    printf("\nEscolha uma opcao");
    printf("\n------------------");
    printf("\n1 - Adicao");
    printf("\n2 - Subtracao");
    printf("\n3 - Multiplicacao");
    printf("\n4 - Divisao");
    printf("\n0 - SAIR");
    printf("\nOpcao: ");
    
    scanf("%d", &menu);
    switch(menu)
    {
      case 1:
        printf("\nAdicao selecionada!!!!\n");
        break;
      case 2:
        printf("\nSubtracao selecionada!!!!\n");
        break;
      case 3:
        printf("\nMultiplicacao selecionada!!!!\n");
        break;
      case 4:
        printf("\nDivisao selecionada!!!!\n");
        break;
      case 0:
        printf("\nTchau!!!!\n");
        break;
      default:
        printf("\nOpcao invalida!!!\n");
    }
      
  }while(menu != 0);
  
  return 0;
}