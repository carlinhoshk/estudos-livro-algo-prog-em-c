/* geracao de numeros aleatorios */
#include<stdio.h>
#include<stdlib.h>

main()
{
	int i;
	printf("Valores aleatorios \n");
	for(i=0;i<1000;i++)
	{
		printf("%d", rand());
	}

}
