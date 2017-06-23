#include <stdio.h>
int main()
{
	int cont;
	
	for(cont=30; cont>=1; cont = cont - 1)
	{
		printf("\n Contando %d...", cont);
	}
	
	printf ("\n Boom!!");
	
	printf("\n\nAgora usando o while...");
	cont=30;
	while(cont >= 1)
	{
		printf("\n Contando %d...", cont);
		cont--;
	}
	printf ("\n Boom!!");
	
	return 0;
}
