#include <stdio.h>
#include <stdlib.h>

main ()
{

    float n = 10.0;
    float *p;

    p = &n;

    printf("O valor indireto é %f \n", *p);

}