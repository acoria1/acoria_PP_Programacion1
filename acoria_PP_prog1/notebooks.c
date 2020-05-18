#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "notebooks.h"

void ordenarNotebooks (e_Notebook vec[],int size)
{
    e_Notebook aux;
    for (int i= 0; i<size-1; i++)
    {
        for (int j = i+1; j<size; j++)
        {
            if (strcmp(vec[i].marca,vec[j].marca)>0)
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
            else if (strcmp(vec[i].marca,vec[j].marca)==0 && vec[i].precio>vec[j].precio)
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }

    }
}

void mostrarNotebooks (e_Notebook notebooks[],int size)
{
    printf("**** LISTADO DE NOTEBOOKS ****\n");
    printf("ID                             PROCESADOR                 MARCA      PRECIO \n");
    for (int i = 0; i<size; i++)
    {
        if (notebooks[i].isFull == 1)
        {
            printf("%4d    %30s     %20s     %7.2f \n",notebooks[i].id,notebooks[i].procesador,notebooks[i].marca,notebooks[i].precio);
        }
    }
    system("pause");
}
