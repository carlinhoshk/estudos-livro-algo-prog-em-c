/*

  Carlos 09/02/2024
  Exercício 1 Declare um ponteiro para um numero inteiro

*/

#include <stdio.h>
#include <stdlib.h>

main()
{   
    int x = 10;
    int *p;
    int p = &x;
    
    printf("%d \n", *p);
    //printf("%s \n", *p);

}