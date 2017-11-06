#include <stdio.h>
#include <stdlib.h>

#define N 5

void somaVetor(int * v1, int * v2) 
{
  int v3[N];
  
  for (int i = 0; i<N; i++ ) {
    v3[i] = v1[i] +v2[i];  
  }
  
  imprimeVetor(v3, N);
  
}

void imprimeVetor (int * v, int tamanho) 
{
  for (int i = 0; i<tamanho; i++) {
    printf("%d ", v[i]);
  }
  
}

void entradaVetor (int * v, int tamanho) 
{
    for (int i =0; i<tamanho; i++) {
    scanf("%d", &v[i]);  
  }
}

int main () 
{
  int v1[N];
  int v2[N];

  entradaVetor(v1,N);
  entradaVetor(v2,N);
  

  somaVetor(v1,v2);
  
  return 0;
    
}