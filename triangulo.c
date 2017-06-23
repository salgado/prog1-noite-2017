#include <stdio.h>
int main()
{
	int lin, col;
	for(lin=1; lin<=30;lin++)
	{
		for(col=1;col<=lin;col++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
