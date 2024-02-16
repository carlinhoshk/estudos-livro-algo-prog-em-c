#include <stdio.h>
#include <stdlib.h>

struct Lista
{
    int valor;
    struct Lista * proximo;
};

main()
{
    struct Lista *inicio = NULL;
    if(inicio == NULL)
    {
        printf("Criando lista ...\n");
        inicio = (struct Lista *)malloc(sizeof(struct Lista));
        printf("A lista foi criada...\n");
        if(inicio !=NULL)
        {
            inicio -> valor = 100;
            inicio -> proximo = NULL;
        }
    printf("O valor da variavel do primeiro no eh %d \n", inicio -> valor);
    }
}
