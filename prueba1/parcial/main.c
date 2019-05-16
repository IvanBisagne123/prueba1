#include <stdio.h>
#include <stdlib.h>
#include "Pelicula.h"
#include "Actrores.h"
#define TAM 50
int pedirOpcion();
int pedirOpcionModificacionPelicula ();
int getOptionShow ();

int main()
{
    eActores listadoActores[TAM];
    ePeliculas listadoPeliculas[TAM];

    inicializarActores(listadoActores,TAM);
    hardcodearDatosActores(listadoActores,TAM);

    inicializarPeliculas(listadoPeliculas,TAM);
    harcodeoPelicula(listadoPeliculas,TAM);

    int opcion;
    int optionShow;
    int idExiste;
    int id;

    return 0;
}
int pedirOpcion()
{
    int opcion;
    printf("------ABM------\ n \ n ");
    printf ( " 1.ALTAS   \ n 2.LISTAR \ n 3.MODIFICAR PELICULA \ n 4.BAJA PELICULAS \ n 5.Salir \ n " );
    scanf ( " % d " , & opcion);

    volver opcion;
}
int  pedirOpcionModificacionPelicula ()
{
    int opcionAmodificar;
    printf ( " % s " , "              MODIFICACION             \ n " );
    printf ( " % 10s - % 10s - % 10s  \ n " , " 1.Titulo " , " 2.Anio de estreno " , " 3.Actor " );
    opcionAmodificar = getInt ( "¿ Que desea modificar? " );

    volver opcionAmodificar;
}
int  getOptionShow ()
{
    int optionShow;
    printf ( " % s " , "                    INFORMES                  \ n " );
    printf ( " % s  % s  \ n " , " 1. Empleados ordenados alfabéticamente por Apellido y Sector \ n " , " 2. Total y promedio de los salarios, y muchos empleados superan el salario promedio " );
    scanf ( " % d " , & optionShow);

    Opción de retorno Mostrar;
}
