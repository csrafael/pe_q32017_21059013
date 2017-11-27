#include <stdio.h>
#include <math.h>

typedef struct tempo 
{
  int min;
  int seg;
  int dec;
  
}tempo;

void diferenca (tempo t1, tempo t2) 
{
  int ti;
  int tf;
  int dif;
  
  tempo r;
  
  ti  = t1.dec;
  ti += t1.seg*100;
  ti += t1.min*6000;
  
  tf  = t2.dec;
  tf += t2.seg*100;
  tf += t2.min*6000;
  
  dif = tf - ti;
  
  r.dec = dif%100;
  r.seg = (dif/100)%60;
  r.min = dif/6000;
  
  if (dif>0) 
    printf("%dm %ds %d",r.min, r.seg, r.dec );
  else 
    printf("-%dm %ds %d",r.min, -r.seg, -r.dec );
  
}
int main ()
{
  tempo t1;
  tempo t2;
  
  scanf("%dm %ds %d",&t1.min, &t1.seg, &t1.dec);
  scanf("%dm %ds %d",&t2.min, &t2.seg, &t2.dec);
  
  diferenca(t1,t2);
  
  return 0;
  
}
