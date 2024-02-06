/*
 Manipulando estrutura com ponteiros

*/

#include <stdio.h>
#include <stdlib.h>

struct Pessoa
{
    char nome[20];
    int idade;
};

alteracao(struct Pessoa *acesso)
{
    acesso -> idade += 20;
}
int main()
{
    struct Pessoa acesso;

    printf("Entre nome: \n");
    gets(acesso.nome);
    printf("Entre idade: \n");
    scanf("%d", &acesso.idade);
    alteracao(&acesso);
    printf("Nome: %s \n", acesso.nome);
    printf("Idade: %d \n", acesso.idade);

    alteracao(&acesso);
    printf("Dados apos mudancas: \n");
    printf("Nome: %s \n", acesso.nome);
    printf("Idade: %d \n", acesso.idade);

}