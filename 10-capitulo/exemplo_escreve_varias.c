#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char texto[100];
    FILE *arq;

    if((arq = fopen("teste.txt", "w")) == NULL)
    {
        printf("Erro de abertura do arquivo \n");
        exit(1);
    }
    
    do
    {
        gets(texto);
        strcat(texto, "\n");
        fputs(texto, arq);
    }while(*texto != '\n');

    fclose(arq);
}