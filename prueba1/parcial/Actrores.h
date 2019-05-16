#ifndef ACTRORES_H_INCLUDED
#define ACTRORES_H_INCLUDED

typedef struct
{
  int id;
  char Nombres;
  char PaisDeOrigen;
  int estado;
}eActores;

void inicializarActores(eActores[], int);
void MostrarActor(eActores,int[]);
void CargarDatosDeActor(eActores,int[]);
void hardcodearDatosActores(eActores [], int);

#endif // ACTRORES_H_INCLUDED
