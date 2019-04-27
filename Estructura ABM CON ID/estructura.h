#ifndef ESTRUCTURA_H_INCLUDED
#define ESTRUCTURA_H_INCLUDED
typedef struct {
int IdPersona;
char Nombre[13];
char Apellido[13];
int Edad;
int IdLocalidad;
int estado;
}ePersona;

typedef struct {
int Id;
char Descripcion[13];
}eLocalidad;

//Funciones ABM
eLocalidad ConstruirLocalidad();
ePersona ConstruirPersona( int IdLocalidad );
void MostrarListadoLocalidad (eLocalidad localidad , int TAM);
void MostrarLocalidad (eLocalidad localidad );
int CargarLocalidades(eLocalidad listado[] ,int TAM);

// funciones de validacion
int esSoloLetras(char str[]);
int esNumerico(char str[]);
void getString(char mensaje[],char input[]);
int esNumerico(char str[]);

#endif // ESTRUCTURA_H_INCLUDED
