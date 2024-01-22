/* escreva um programa em C que apresente um menu de opcoes para a escolha do time de futebol de alguem */
#include<stdio.h>
#include<stdlib.h>

int main()
{

	char tima[10];
	

	printf("Escreva o nome do seu time: \n");
	gets(tima);

	printf("Você é torcedor do time: %s \n", tima);


}

