typedef struct nofila {
  int dado; 
   struct nofila *prox;
}noFila;
 
typedef struct cabeca {
  noFila* inicio;  
   noFila* final;   
   int tamanho; 
}TFila;
 
typedef struct nopilha {
  int dado; 
  struct nopilha *prox;
}noPilha;
typedef noPilha* TPilha;
 
 
void criarFila(TFila *fila );
int filaVazia(TFila fila );
int enfileirar(TFila *fila, int elemento );
int desenfileirar(TFila *fila, int *valor );
void imprimir( TFila fila );
void criarPilha( TPilha *pilha );
int pilhaVazia( TPilha pilha );
int empilhar( TPilha *pilha, int dado );
int desempilhar( TPilha *pilha, int *dado );

