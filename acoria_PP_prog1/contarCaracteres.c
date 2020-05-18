#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "contarCaracteres.h"

int contarCaracteres (char vec[],char c)
{
    int contador = 0;

    for (int i = 0; i<strlen(vec); i++)
    {
        if (vec[i]==c)
        {
            contador++;
        }
    }
    return contador;
}
