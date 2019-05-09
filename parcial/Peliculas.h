#ifndef PELICULAS_H_INCLUDED
#define PELICULAS_H_INCLUDED
#endif // PELICULAS_H_INCLUDED




typedef struct
{
    int id;
    char Titulos;
    char FechaDeEstreno;
    char Generos;
    char CodigoDePeliculas;
}ePeliculas;

void mostrarPelicula(ePeliculas,int[]);
void cargarPeliculas(ePeliculas,int[]);
void mostrarListaDePeliculas(ePeliculas,int[]);

