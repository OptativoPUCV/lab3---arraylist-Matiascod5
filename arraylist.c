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


  
  if ( i > l->size) return;

  if ( l->capacity == l->size){
    l->capacity = l->capacity * 2;
    l->data = realloc( l->data , sizeof( void*)   * l->capacity );
    
  }
    
  if( i < l->size){

    for ( int j = l->size ; j > i ; j--){
      l->data[j] = l->data[j - 1];
    }

    l->data[i] = data;
    l->size++;
  }
}

void* pop(ArrayList * l, int i){
  
  if ( i >= l->size) return NULL;

  if ( i < 0){


    for ( int j = l->size ; j < ( l->size + i) - 1 ; j++){

      l->data[ j] = l->data [ j + 1];
      
    }
    l->size--;
    return l->data[l->size + i];
    
  }

 

  for ( int j = 0 ; j < i - 1 ; j++){
    l->data[j + 1] = l->data[ j ];
  }

  


  l->size--;
  return l->data[ i];


}

void* get(ArrayList * l, int i){
  if ( i >= l->size) return NULL;

    if ( i < 0){

      /*if ( l->capacity < 0){
        return NULL;
      }*/

      return l->data[ l->size + i];

    }

    return l->data[ i];
}



int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
