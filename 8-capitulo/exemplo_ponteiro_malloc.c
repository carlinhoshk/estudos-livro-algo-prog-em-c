#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ponteiro;

    // Aloca memória para um único inteiro
    ponteiro = (int *)malloc(sizeof(int));

    if (ponteiro == NULL) {
        printf("Falha ao alocar memória.");
        return 1;
    }

    // Atribui um valor ao espaço de memória alocado
    *ponteiro = 10;

    // Imprime o valor
    printf("Valor: %d\n", *ponteiro);

    // Libera a memória alocada
    free(ponteiro);

    return 0;
}
