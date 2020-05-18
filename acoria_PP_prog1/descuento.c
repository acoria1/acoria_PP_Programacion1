#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "descuento.h"

float aplicarDescuento (float precio)
{
    float precioFinal;
    precioFinal = precio * 0.95;
    return precioFinal;
}
