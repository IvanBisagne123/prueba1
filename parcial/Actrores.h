#ifndef ACTRORES_H_INCLUDED
#define ACTRORES_H_INCLUDED
//#endif // ACTRORES_H_INCLUDED

typedef struct
{
  int id;
  char Nombres;
  char PaisDeOrigen;
}eActores;

void MostrarActor(eActores,int[]);
void CargarDatosDeActor(eActores,int[]);

void hardcodearDatosActores(eActores[], int);
