#include <stdio.h>
#include <stdlib.h>

void quick_sort(int array[], int primeiro, int ultimo)
{
    int temp, baixo, alto, separador;
    baixo = primeiro;
    alto = ultimo;
    separador = array[(primeiro + ultimo) / 2];
    do
    {
        while(array[baixo] < separador)
            baixo++;
        while(array[alto] > separador)
            alto--;
        if (baixo <= alto)
        {
            temp = array[baixo];
            array[baixo++] = array[alto];
            array[alto--] = temp;
        }
    } while (baixo <= alto);
    if (primeiro < alto)
        quick_sort(array, primeiro, alto);
    if (baixo < ultimo)
        quick_sort(array, baixo, ultimo);
}

main()
{
    int valores[100], i;
    for (i = 0; i < 100; i++)
        valores[i] = rand() % 100;
    quick_sort(valores, 0, 99);
    for (i = 0; i < 100; i++)
        printf("%d \n", valores[i]);
}