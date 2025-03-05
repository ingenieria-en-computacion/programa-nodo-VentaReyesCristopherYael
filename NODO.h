#ifndef NODO
#define ifndef_NODO
#define TAM 1000
#include <stdbool.h>

typedef int DATO;
typedef struct _Nodo Nodo;
struct _Nodo{
    DATO dato;
    Nodo* sig;
}
*CrearNodo()->Nodo
BorrarNodo(Nodo)->Booleano
AsignarDato(Nodo,Dato)->Nodo
ObtenerDato(Nodo)->Dato
AsignarRef(Nodo, Nodo)->Nodo
ObtenerRef(Nodo)->Nodo

#endif