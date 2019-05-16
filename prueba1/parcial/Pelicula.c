#include "Pelicula.h"
#include "Actrores.h"

void inicializarPeliculas(ePeliculas[],int len)
{
    int i
    for(i=0:i<TAM;i++)
    {
        listado[i].estado=1;
    }
    return 0;
}

void altaPeliculas(ePelicula[], eActor[], int len);
{
    {
    int id;
    int codigoPelicula;
    char titulo[51];
    int fechaDeEstreno;
    char genero[21];
    int idActor;
    int generoNumero;
    int idExiste;
    //int codigoPeliculaAverificar;

    id = buscarLibrePelicula(listado, len);

    codigoPelicula = getInt("Ingrese codigo pelicula\n");

    while(codigoPelicula < 100 || codigoPelicula > 999)
    {
        codigoPelicula = getInt("Reingrese un codigo valido 100/999 \n");
    }


    codigoPelicula = verificarCodigo(listado, len, codigoPelicula);
    while(codigoPelicula == -1)
    {
        codigoPelicula = getInt("Reingrese un codigo valido, ese ya existe 100/999 \n");
        codigoPelicula = verificarCodigo(listado, len, codigoPelicula);

    }


    getString(" Ingrese titulo \n", titulo);

    while(esNumerico(titulo)==1)
    {
        getString(" Ingrese nuevo titulo, debe ser texto \n", titulo);

    }

    fechaDeEstreno = getInt("Ingrese Año de estreno \n");
    while(fechaDeEstreno < 1984 || fechaDeEstreno > 2025)
    {
        fechaDeEstreno = getInt("Reingrese una fecha valida 1984/2025 a\n");
    }

    do
    {
        generoNumero = getInt(" Ingrese genero \n 1.Accion 2.Comedia 3.Terror 4.Otro  \n");

        switch(generoNumero)
        {
        case 1:
            strcpy(genero, "accion");
            break;
        case 2:
            strcpy(genero, "comedia");
            break;
        case 3:
            strcpy(genero, "terror");
            break;
        case 4:
            strcpy(genero, "otro");
            break;
        default:

            printf("Erroneo. Genero inexistente");
            break;
        }
    }
    while(generoNumero > 4);

    idActor = getInt("id de actor principal\n");
    idExiste = buscarActorPorID(listadoActores, len, idActor);
    while(idExiste == -1)
    {
        idActor = getInt("Reingrese una ID de Actor valida\n");
        idExiste = buscarActorPorID(listadoActores, len, idActor);;
    }

    int i;
    for(i = 0; i<len; i++)
    {
        if(listado[i].estado == 1)
        {
            listado[i].id = id;
            listado[i].codigoPelicula= codigoPelicula;
            strcpy(listado[i].titulo, titulo);
            listado[i].fechaDeEstreno= fechaDeEstreno;
            strcpy(listado[i].genero, genero);
            listado[i].idActor= idActor;
            listado[i].estado = 0;
            return 0;
        }
    }
    return -1;
}

void mostrarListaDePeliculas(ePeliculas,int[])
{
     int i;

     printf("%10s - %10s - %8s - %10s - %10s \n", "ID", "codigoPelicula", "titulo", "fechaDeEstreno", "genero");

     for(i = 0; i < len; i++)
    {
        if(listado[i].estado == 0)
        {
            printf("%10d  %10d  %12s %16d %15s \n", listado[i].id, listado[i].CodigoDePeliculas, listado[i].Titulos, listado[i].FechaDeEstreno, listado[i].Generos);
        }
    }
    return 0;
}

int hardcodeoPelicula(ePelicula listado[], int len)
{
    int i

    int id[5]={101,102,103,104,105};
    char Titulos[5][50]={"terminator","thor","it","gladiador","batman"};
    int FechaDeEstreno[5][50]={09/05/2020,06/04/2020,12/12/2020,22/10/2020,08/11/2020};
    char Generos[4][50]={"accion","comedia","terror","romantica","accion"};
    char CodigoDePeliculas{1999,2666,3555,4777};
    int idActor[5]={1,2,3,4,5};
    int estado[5]={0,0,0,0,0};

    for(i=0;i<TAM;i++)
    {
        listado[i].id = id[i];
        listado[i].CodigoDePelicula.CodigoDePelicula[i];
        strcpy(listado[i].Titulos.Titulos[i]);
        listado[i].FechaDeEstreno.FechaDeEstreno[i];
        strcpy(listado[i].Generos.Generos[i]);
        listado[i].idActor.idActor[i];
        listado[i].estado.estado[i];
    }
    return 0;
}
