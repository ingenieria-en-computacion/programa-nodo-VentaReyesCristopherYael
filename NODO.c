#include "NODO.h"

Nodo* crear_nodo(){
    Nodo* nuevo=(Nodo*)malloc(sizeof(Nodo));
    nuevo->sig=NULL;
    nuevo->dato=0;
    return nuevo;
}

bool borrar_nodo(Nodo *n){
    if(n->sig==NULL){
        free(n)
        return true;
    }
    return false;
}

Nodo* agregar_dato(Nodo* n, DATO, d){
    if(n!=NULL){
        n->dato=d;
    }
    return n;
}

DATO Obtener_dato(Nodo* n){
    If(n==NULL){
        Printf("No hay datos\n");
    }
    return n->dato;
}

Nodo* Asignar_referencia(Nodo* n, Nodo* e){
    if(n!=NULL){
        n->sig=e;
    }
    return n;
}

Nodo* obtener_ref(Nodo* c){
    if(c!=NULL){
        return c->sig;
    }
    return NULL;
}