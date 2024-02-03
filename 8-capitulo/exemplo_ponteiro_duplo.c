/* Fazendo o ponteiro duplo mostrar o valor da variavel apontada pelo ponteiro original  */

#include<stdio.h>
#include<stdlib.h>

main()
{
	int x, *p, **q;
	x=10;
	p=&x;
	q=&p;
	printf("Valor atribido a x = %d \n",x);
	printf("Valor de x, acessado pelo ponteiro duplo = %d \n", **q);

}	
