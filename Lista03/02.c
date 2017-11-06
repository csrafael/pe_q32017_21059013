#include <stdio.h>

#define TAMANHO 255

typedef struct pilha 
{
  char  posicao[TAMANHO];
  int   topo;
  
}pilha;

int insere_pilha (pilha *p, char letra ) 
{
  if ( p->topo+1 < TAMANHO ) {
    ++p->topo;
    p->posicao[p->topo] = letra;
  
    return 1;
  }
  printf("erro na inserção da pilha");
  
  return -1;
}

char remove_pilha (pilha *p) 
{
  --(p->topo);
  return p->posicao[p->topo+1];
}

void invertePalavra (char  *palavra) 
{
  pilha * p;
  p->topo = -1;
  while (* palavra != '\0') {
    
    insere_pilha (p,* palavra);
    palavra++;

  }
  
  while (p->topo > -1) {
    printf("%c", remove_pilha(p) );
  }
  
}

int main () 
{
    char entrada[255];
    fgets( entrada, 255, stdin );
    
    invertePalavra(entrada);
    return 0;
}