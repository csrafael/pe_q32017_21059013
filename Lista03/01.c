#include <stdio.h>
/*
  
*/
int contaVogais (char *palavra) 
{
  int contador = 0;
  
  while (*palavra != '\0') {
    
    if (*palavra == 'a' || *palavra == 'e' || *palavra == 'i' ||
      *palavra == 'o' || *palavra == 'u') 
      contador++; 
    
    palavra++;
  }
  
  return contador;
}

int main () 
{
    char entrada[255];
    fgets( entrada, 255, stdin );

    printf("%d", contaVogais(entrada) );
    
    return 0;
    
}