#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int tamanho = 5;

    // Aloca memória para um array de inteiros com 5 elementos
    array = (int *)calloc(tamanho, sizeof(int));

    if (array == NULL) {
        fprintf(stderr, "Falha ao alocar memória\n");
        return 1;
    }

    // Preenche o array com alguns valores
    for (int i = 0; i < tamanho; i++) {
        array[i] = i * 10;
    }

    // Imprime os valores do array
    printf("Valores do array:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", array[i]);
    }

    // Libera a memória alocada
    free(array);

    return 0;
}

