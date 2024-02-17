#include <stdio.h>
#include <stdlib.h>


struct{
    char nome[20];
    int idade;

}p;

main()
{
    FILE *f;
    strcpy(p.nome, "Carlos");
    p.idade = 26;
    f = fopen("pessoa.dat", "w");
    fwrite(&p, 1, sizeof(p), f);
    fclose(f);
}