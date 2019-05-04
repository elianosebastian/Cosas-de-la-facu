#ifndef PELICULAS_H_INCLUDED
#define PELICULAS_H_INCLUDED

typedef struct
{
    int id=0;
    int estado;
    char titulo[50];
    char director[50];
    int idEstudio;
    float duracion;
    int anioDeEstreno;

} ePelicula;

#endif // PELICULAS_H_INCLUDED

void inicializarPeliculas(ePelicula [], int );
int buscarLibrePelicula(ePelicula [], int );
void cargarEstructuraPeliculas(ePelicula [], int );
int mayorIdPeliculas(ePelicula [], int );
void mostrarEstructurapelis(ePelicula []);
void mostrarListaPeliculas(ePelicula [], int );
