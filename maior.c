#include <stdio.h>
int main()
{
	int i;
	int numero, maior, menor, soma;
	float media;
	
	soma = 0;
	menor = 9999;
	maior = -1;
	
	for(i=1; i<=5; i++)
	{
		printf("\nEntre com um numero [0-100]: ");
		scanf("%d", &numero);
		
		if(numero> maior)
		{
			maior = numero;
		}
		
		if(numero<menor)
		{
			menor = numero;
		}
		
		soma = soma + numero;
	}
	
	media = (float)soma / 5;
	
	printf("\nO maior numero = %d", maior);
	printf("\nO menor numero = %d", menor);
	printf("\nA media dos numeros = %.2f", media);
	
	return 0;
}
