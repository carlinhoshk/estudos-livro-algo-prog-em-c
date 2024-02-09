/*
    Carlos 09/02/2024

    Exercício 3 Qual é a saida do codigo abaixo

*/
#include <stdio.h>
#include <stdlib.h>

main()
{
    int contador=10, *temp, soma=0;
    temp = &contador; // o erro de má digitação intecional ou não do autor do exercicio temp = &count;
    *temp =20;
    temp = &soma;
    *temp = contador;
    printf("contador = %d, *temp = %d, soma = %d\n", contador, *temp, soma);

}