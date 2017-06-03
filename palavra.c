#include <stdio.h>
#include <string.h>

int main()
{
  char palavra[20];
  int i, tam=0;
  
  printf("\nDigite uma palavra:");
  scanf("%s", palavra);
  
  tam=strlen(palavra);
  
  printf("\n");
  
  for(i=(tam-1);i>=0;i--)
  {
    printf("%c", palavra[i] );
  }
  printf("\n");
  return 0;
}