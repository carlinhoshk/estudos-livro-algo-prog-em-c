#include <stdio.h>
#include <stdlib.h>

main()
{

    char *banda[] = {"ALC", "The-Doors", "Metalica"};
    char **aponta_banda;

    aponta_banda = banda;

    while(*aponta_banda)
    {
        printf("%s \n", *aponta_banda);
        aponta_banda++;
    }

}

