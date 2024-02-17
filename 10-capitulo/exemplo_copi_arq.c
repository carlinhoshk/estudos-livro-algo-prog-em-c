#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *original, *copia;
    int ch;
    
    if(argc != 3)
    {
        printf("A sintaxe correta eh: \n");
        printf("copiar arquivo-original arquivo-copia \n");
        exit(1);
    }

    original = fopen(argv[1], "rb");
    if(original == NULL)
    {
        printf("Erro de abertura do arquivo %s \n", argv[1]);
        exit(2);
    }
    if((copia = fopen(argv[2], "wb")) == NULL)
    {
        printf("erro na copia do arquivo \n");
        exit(3);
    }
    while((ch=fgetc(original)) != EOF)
    {
        fputc(ch, copia);
        fclose(original);
        fclose(copia);
    }
    
}