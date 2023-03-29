#include "fila.h"
#include <stdlib.h>
#include "stdio.h"

int inverter_ordem_da_fila(TFila * Fila,TPilha * Pilha);
int main(void) {
  int a = 0;
  TFila fila;
  TPilha pilha;
  criarFila( &fila );
  criarPilha( &pilha);
  enfileirar( &fila,1);
  enfileirar( &fila,2);
  enfileirar( &fila,3);
  imprimir( fila );
  inverter_ordem_da_fila(&fila,&pilha);
  imprimir( fila );
  desenfileirar ( &fila, &a );
  desenfileirar ( &fila, &a );
  desenfileirar ( &fila, &a );
  imprimir( fila );
  printf("que %d\n", filaVazia( fila ));
  return 0;
}

int inverter_ordem_da_fila(TFila * Fila,TPilha * Pilha){
int aux = 0;
while (filaVazia(*Fila) != 1){
  desenfileirar( Fila, &aux);
  empilhar( Pilha, aux);
}
while(pilhaVazia(*Pilha ) !=1){
 desempilhar( Pilha, &aux);
 enfileirar( Fila, aux);
}
return 1;
}