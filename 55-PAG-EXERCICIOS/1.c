/* 

Carlinhoshk 
18:09 
31-12-23

escreva um programa que resolva o seguinte problema; uma copia "xerox" custa R$ 0,25 por folha, mas acima de 100 folhas esse valor cai para
R$ 0,20 por unidade. Dado o total de copias, informe o valor a ser pago. */

#include<stdio.h>
#include<stdlib.h>

main()
{
	int qtd_copias;
	float preco, total, total_ate=25.00;

	printf("Informe quantas copias iria fazer\n");
	scanf("%d", &qtd_copias);
	if(qtd_copias >=100)
	{	// injetar o valor de até 100 copias com valor 0.25
		 qtd_copias = qtd_copias - 100;
		
		total = (qtd_copias * 0.20) + total_ate;
		printf("o total a pagar vai ser %3.2f \n", total);	
	}
	else
	{if(qtd_copias <100)
	{	total = qtd_copias * 0.25;
		printf(" o total a pagar vai ser %3.2f \n", total);	


		}


	}
}
