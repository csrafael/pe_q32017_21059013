#include <stdio.h>

#define L 3
#define C 3

void matrizT (int l, int c, int matriz[l][c]) {
  int i, j, aux;
  
  for (i = 0; i < l; i++) {
    for (j = i+1; j < c; j++) {
      if (j != i) {
        aux = matriz[i][j];
        matriz[i][j] = matriz[j][i];
        matriz[j][i] = aux;
      }
    }
  }
  
  imprimeMatriz(L, C, matriz);
  
}

void imprimeMatriz (int l, int c, int matriz[l][c]) 
{
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      printf ("%d ",matriz[i][j]);
    }
    printf ("\n");
  }
}



int main () {
  int  i, j;
  
  int matriz[L][C];
  
  for (i = 0; i < L; i++) {
    for (j= 0; j < C; j++) {
      scanf ("%d",&matriz[i][j]);
    }
  }
  printf ("\n");
  
  matrizT (L, C, matriz);
  
  return 0;
}