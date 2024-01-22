#include<stdio.h>
#include<stdlib.h>

main()
{
	char string[50];
	int i;
	printf("Digite um conjuto de caracteres: \n");
	gets(string);
	for(i=0;string[i] != NULL;i++)
	       putchar(string[i]);
	printf("\n");
	printf("O numero de caracteres e %d \n",i);	
		

}
