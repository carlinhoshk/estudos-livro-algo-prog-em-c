// coloque inicio de um programa em c 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10] = "FATEC";
    char *ptr_str;

    ptr_str = nome;
    printf("A string eh referenciada por %c \n", *ptr_str);
    printf("A string exibida via ponteiro: ");
    while (*ptr_str)
    {
        putchar(*ptr_str);
        ptr_str++;

    }
printf("\n");
    
}