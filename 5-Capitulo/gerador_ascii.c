/* gerando a tablea ASCII  */

#include<stdio.h>
#include<stdlib.h>

main()
{
	int a =0;
	printf("Gerando tabela ASCII... \n\n");
	do{
		printf("(%d, %c) \n", a, a);
		a++;
	}while(a<=255);

}
