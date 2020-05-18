#ifndef NOTEBOOKS_H_INCLUDED
#define NOTEBOOKS_H_INCLUDED

typedef struct
{
    int id;
    char procesador[30];
    char marca[20];
    float precio;
    int isFull;

} e_Notebook;

#endif // NOTEBOOKS_H_INCLUDED

/** \brief Muestra un listado de notebooks con un encabezado con los nombres de cada dato a mostrar.
 *
 * \param vector de notebooks a mostrar tipo e_Notebook
 * \param tamanio del vector de notebooks
 *
 */
void mostrarNotebooks (e_Notebook notebooks[],int size);

/** \brief Ordena vector de notebooks por Marca en orden alfabetico. De ser la misma marca ordena por precio de manera ascendente
 *
 * \param vector de notebooks a mostrar tipo e_Notebook
 * \param tamanio del vector de notebooks
 *
 */
void ordenarNotebooks (e_Notebook vec[],int size);
