#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5]={50, 20, 10, 70, 15};
    int i, valor;

    printf("Qual valor deseja procurar? ");
    scanf("%d", &valor);

    for(i=0;i<5;i++)
    {
        if(valor == numeros[i])
        {
            printf("Valor encontrado na posicao %d \n", i);
            exit(1);
        }
    }
    printf("Valor nao encontrado! \n");
}