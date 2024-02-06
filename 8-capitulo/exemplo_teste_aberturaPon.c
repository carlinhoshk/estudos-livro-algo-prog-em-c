#include <stdio.h>
#include <stdlib.h>

main(){

    double * pdata;
    double data[10];

    pdata = data;
    pdata = &data[0];

    printf("Endereço de pdata: %p \n", pdata);
    printf("Endereço de data: %p \n", data);
    printf("Endereço de data[0]: %p \n", &data[0]);

}

