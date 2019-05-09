#include "Actrores.h"

void hardcodearDatosActores(eActores lista[], int tam);
{
    int i;

    int id[5]={834,221,436,584,345};
    char Nombres[5][50]={"Julieta Roberto","Roberto Deniro","Richard Darin","Tita Merelo","Sandro"};
    char PaisDeOrigen[5][50]={"EEUU","EEUU","Argentina","Argentina","Argentina"};

    for(i=0;i<TAM;i++)
    {
        lista[i].id=id[i];
        strcpy(lista[i].Nombres,Nombres[i]);
        lista[i].PaisDeOrigen,PaisDeOrigen[i]
    }
}
