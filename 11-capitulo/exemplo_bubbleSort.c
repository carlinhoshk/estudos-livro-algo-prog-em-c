#include <stdio.h>
#include <stdlib.h>

main()
{
    int vetor[5] = {50, 20, 30 ,10,60};
    int i;
    int contador;
    int auxiliar;
    int ordernados = 0;

    while (ordernados == 0)
    {
        ordernados = 1;
        for (contador = 0; contador < 4; contador++)
        {
            if (vetor[contador] > vetor[contador + 1])
            {
                auxiliar = vetor[contador];
                vetor[contador] = vetor[contador + 1];
                vetor[contador + 1] = auxiliar;
                ordernados = 0;
            }
        }
    }

    printf("\n");
    for (contador=0; contador<5; contador++)
    {
        printf("%d ",vetor[contador]);
        printf("\n");
    }

}