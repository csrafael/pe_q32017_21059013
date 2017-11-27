#include <stdio.h>
#include <math.h>

typedef struct ponto 
{
  float x;
  float y;
  float z;
  
}ponto;

float distancia (ponto a, ponto b) 
{
  float dist;
  
  dist  = ( (b.x) - (a.x) ) * ( (b.x) - (a.x) );
  dist += ( (b.y) - (a.y) ) * ( (b.y) - (a.y) );
  dist += ( (b.z) - (a.z) ) * ( (b.z) - (a.z) );
  dist  = sqrt(dist);
  
  return dist;
}

int main () 
{
  ponto p1;
  ponto p2;
  
  scanf ( "%f, %f, %f" , &(p1.x) , &(p1.y) , &(p1.z) );
  scanf ("%f, %f, %f" , &(p2.x) , &(p2.y) , &(p2.z) );
  
  printf("%.2f", distancia(p1,p2));
  
  return 0;
}