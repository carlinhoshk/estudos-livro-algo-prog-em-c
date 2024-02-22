#include <stdio.h>
#include <stdlib.h>

int busca_binaria(int vetor[], int valor, int tamanho) {
    int achou = 0;
    int alto = tamanho - 1, baixo = 0, meio;
    
    while (!achou && baixo <= alto) {
        meio = (alto + baixo) / 2;
        printf("baixo = %d, alto = %d, meio = %d \n", baixo, alto, meio);
        
        if (valor == vetor[meio])
            achou = 1;
        else if (valor < vetor[meio])
            alto = meio - 1;
        else
            baixo = meio + 1;
    }
    
    return (achou ? meio : -1);
}

int main() {
    int vetor[100], i;
    
    for (i = 0; i < 100; i++)
        vetor[i] = i;
    
    printf("Resultado da busca: %d \n", busca_binaria(vetor, 33, 100));
    printf("Resultado da busca: %d \n", busca_binaria(vetor, 9, 100));

    return 0;
}
