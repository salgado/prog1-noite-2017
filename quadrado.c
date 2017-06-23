#include <stdio.h>
/*
1- Calcular o quadrado dos números de 1 a 10
*/
int main()
{
	int num;
	
	for(num=1; num<=10; num++)
	{
		printf("\nO quadrado do numero %d = %d", num, num * num);
	}
	return 0;
}
