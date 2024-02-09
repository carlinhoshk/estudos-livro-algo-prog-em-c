#include <stdio.h>
#include <stdlib.h>

main(){
    char *str;
    str = (char *)malloc(50);

    if(str)
        printf("50 bytes de memoria alocada \n");
    else
        printf("Falha ao alocar memoria \n");
    printf("\n");

    realloc(str,100);
    if(str)
        printf("100 bytes de memoria alocada \n");
    else
        printf("Falha ao alocar memoria \n");
    printf("\n");

}