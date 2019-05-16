#ifndef PELICULAS_H_INCLUDED
#define PELICULAS_H_INCLUDED

typedef struct
{
    int id;
    char Titulos;
    int FechaDeEstreno;
    char Generos;
    char CodigoDePeliculas;
    int idActor;
    int estado;
} ePeliculas;

void inicializarPeliculas(ePeliculas[],int);
void altaPeliculas(ePelicula[], eActor[], int);
void mostrarListaDePeliculas(ePeliculas,int[]);
void hardcodeoPelicula(ePeliculas[],int);

#endif // PELICULAS_H_INCLUDED
