#include <stdio.h>
#include <stdlib.h>

main(){

    FILE *arquivo;
    char mensagem[80], nome[80];

    printf("Entre o nome do arquivo: ");
    gets(nome);

    printf("Entre o texto: ");
    gets(mensagem);

    if((arquivo=fopen(nome, "w")) == NULL)
    {
        printf("Erro de abertura \n");
    }
    else
    {
        fprintf(arquivo, "%s \n", mensagem);
        fclose(arquivo);
    }
}