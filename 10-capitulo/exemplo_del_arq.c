#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE * arquivo;
    char opcao[5];
    
    if(argc != 2)
    {
        printf("Erro de sintaxe. \n");
        exit(1);
    }

    printf("Deseja apagar o arquivo %s (s/n)? ", argv[1]);
    gets(opcao);

    if((*opcao == 's'))
    {
        if(remove(argv[1]))
        {
            printf("Erro na remoção do arquivo %s \n", argv[1]);
            exit(1);
        }
        else printf("Arquivo %s apagado \n", argv[1]);

    return 0;
    }
}