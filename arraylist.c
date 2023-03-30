#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
  ArrayList *dato = NULL;
  dato = malloc( sizeof( ArrayList) );
  dato->data = malloc( sizeof( void* ) * 2);
  dato->capacity = 2;
  dato->size = 0;
  
    return dato;
}

void append(ArrayList * l, void * data){
  if ( l->capacity > l->size){
    l->data[ l->size ] = data;
    
  }
  else{
    l->data = realloc( l->data , sizeof( void*) * ( l->capacity * 2));
    l->capacity = l->capacity * 2;
    l->data[ l->size] = data;
    
  }
  l->size++;
}

void push(ArrayList * l, void * data, int i){

  if ( i > l->size)
    
  if( l->capacity > l->size){

    l->data[i ] = data;
    l->size++;
  } 

  if ( l->capacity == l->size){
    l->data = realloc( l->data, sizeof( void*) * ( l->capacity * 2));
      if ( l->size > i){
        for ( size_t j = i ; j < l->size ; j++){
          l->data[ i ] = l->data[i];
        }
        l->data[ i ] = data;
       l->size++;

    }
  }

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
