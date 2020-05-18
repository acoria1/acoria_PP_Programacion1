#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "contarCaracteres.h"
#include "descuento.h"
#include "notebooks.h"

#define PRECIO 200
#define TAMN 10

#define STRING "buenos dias profesor"
#define CARACTER 'b'

int main()
{
    e_Notebook notebooks [TAMN] =
    {
        {3412,"Atom","Lenovo",15200.50,1},
        {3211,"Atom","Dell",15000.50,1},
        {9412,"Pentium","Asus",20200.00,1},
        {4090,"Core","HP",13000.90,1},
        {1410,"Pentium","Lenovo",9990.10,1},
        {2560,"Xeon","HP",18000.50,1},
        {7341,"Itanium","Apple",30000.00,1},
        {9871,"Core","Apple",10500.50,1},
        {4123,"Celeron","Acer",13900.90,1},
        {7439,"Atom","Lenovo",23000.00,1},
    };

    mostrarNotebooks(notebooks,TAMN);
    ordenarNotebooks(notebooks,TAMN);
    mostrarNotebooks(notebooks,TAMN);

    printf(("\nPRECIO: %d \n"),PRECIO);
    float precioConDescuento = aplicarDescuento(PRECIO);
    printf("PRECIO CON DESCUENTO DEL 5 POR CIENTO: %.2f \n\n",precioConDescuento);

    printf("STRING: %s \n",STRING);
    int cantCar = contarCaracteres(STRING,CARACTER);
    printf("CANTIDAD DE %c EN LA CADENA: %d \n\n",CARACTER,cantCar);

    return 0;
}





