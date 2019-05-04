#ifndef PELICULAS_H_INCLUDED
#define PELICULAS_H_INCLUDED

#define LIBRE 0
#define OCUPADO 1


typedef struct
{
    int id;
    int estado;
    char titulo[50];
    char director[50];
    int idEstudio;
    float duracion;
    int anioDeEstreno;

} ePelicula;

#endif // PELICULAS_H_INCLUDED
#include "estudios.h"

void inicializarPelicula(ePelicula lista[], int tam);
void harcodearPelicula(ePelicula lista[]);
void mostrarListaPeliculas(ePelicula lista[], int tam);
void mostrarPelicula(ePelicula unaPelicula);
void mostrarPeliculasConEstudios(eEstudio listaEstudios[] , int tamest, ePelicula listaPeliculas[], int tampeli);
