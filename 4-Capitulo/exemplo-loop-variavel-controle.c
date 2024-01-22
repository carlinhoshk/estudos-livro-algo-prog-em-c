/* convertendo caracteres minusculos para maiusculos */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

main()
{
	char min, mai;
	int cont = 0;
	for(cont=1; cont<=10; cont++)
	{
		printf("\nDigite um caracter...");
		min = getchar();
		mai = toupper(min);
		putchar(mai);
	
	}

}
