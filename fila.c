#include "fila.h"
#include <stdlib.h>
#include <stdio.h>

noFila* aloca();
void criarFila( TFila * fila ){
  fila->inicio = fila->final = NULL; 
   fila->tamanho = 0;
}
int filaVazia( TFila fila ){
  return ( fila.inicio == NULL && fila.final == NULL );
}
 
int enfileirar( TFila *fila, int elemento ){
   noFila* novo;
  if ( (novo = aloca()) == NULL ) return 0;
 
   novo->dado = elemento;
   novo->prox = NULL;
 
   if( filaVazia(*fila) ) fila->inicio = novo;
   else (fila->final)->prox = novo; 
 
   fila->final = novo;
   (fila->tamanho)++;
 return 1;
}
 
int desenfileirar ( TFila *fila, int *valor ){
   if ( filaVazia(*fila) ) return 0;
   *valor = (fila->inicio)->dado;
   if( fila->inicio == fila->final ) fila->final = NULL;
   noFila* aux = fila->inicio;
      fila->inicio = (fila->inicio)->prox;
   free(aux);
   (fila->tamanho)--;
   return 1;
}
 
void imprimir( TFila fila ){
  printf("\nFila=[ ");
   for (  ; fila.inicio != NULL; fila.inicio = (fila.inicio)->prox )
    printf( "%d ", (fila.inicio)->dado );
   printf("]");
}
noFila* aloca( void ){ return ( (noFila*) malloc( sizeof(noFila) ) ); }

void criarPilha( TPilha *pilha )
{
  *pilha = NULL;
}
int pilhaVazia( TPilha pilha )
{
  return pilha == NULL;
}
 
int empilhar( TPilha *pilha, int dado )
{
  TPilha novo;
  if( (novo = (noPilha*) malloc(sizeof(noPilha))) == NULL ) return 0;
  novo->dado = dado;
  novo->prox = *pilha;
  *pilha = novo;
  return 1;
}
int desempilhar( TPilha *pilha, int *dado )
{
   if ( pilhaVazia( *pilha ) ) return 0;
 
  TPilha aux;
 
  aux = *pilha;
  *dado = aux->dado;
  *pilha = (*pilha)->prox;
  free( aux );
 
   return 1;
}


