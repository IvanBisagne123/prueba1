#include "Actrores.h"
#include "Peliculas.h"

void inicializarActores(eActores[], int len)
{
    int i;
    for(i=0;i<TAM;i++)
    {
        listado[i].estado;
    }
    return 0;
}

void hardcodearDatosActores(eActores lista[], int len)
{
    int i;

    int id[5]={1,2,3,4,5};
    char Nombres[5][50]={"Julieta Roberto","Roberto Deniro","Richard Darin","Tita Merelo","Sandro"};
    char PaisDeOrigen[5][50]={"EEUU","EEUU","Argentina","Argentina","Argentina"};
    int estado[5]={0,0,0,0,0};

    for(i=0;i<TAM;i++)
    {
        listado[i].id=id[i];
        strcpy(istado[i].Nombres.Nombres[i]);
        strcpy(listado[i].PaisDeOrigen.PaisDeOrigen[i]);
        listao[i].estado=estado[i];
    }
   return 0;
}
