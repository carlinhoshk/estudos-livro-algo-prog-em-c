#include <stdio.h>
#include <stdlib.h>

main()
{
    FILE * arquivo;
    char mensagem[80];
    printf("Entre o texto: \n");
    gets(mensagem);

    if((arquivo = fopen("arquivo.txt", "a")) == NULL)
    {
        printf("Erro de abertura \n");
    }
    else
    {
        fprintf(arquivo, "%s \n", mensagem);
        fclose;
    }
}