#ifndef ESTUDIOS_H_INCLUDED
#define ESTUDIOS_H_INCLUDED

typedef struct
{
    int id=0;
    int estado;
    char nombre[50];
    char pais[50];

    int anioDeCreacion;

} eEstudio;

#endif // ESTUDIOS_H_INCLUDED
void inicializarEstudios(eEstudio [], int );
int buscarLibreEstudio(eEstudio [], int );
void cargarEstructuraEstudios(eEstudio [], int );
int mayorIdEstudios(eEstudio [], int );
void mostrarEstructuraEstudio(eEstudio []);
void mostrarListaEstudio(eEstudio [], int tam);

