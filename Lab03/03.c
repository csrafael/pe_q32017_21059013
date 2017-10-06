#include <stdio.h>

unsigned long int somaD (unsigned int n)
{
	if (n<10)
		return n;

	return somaD(n%10);
}

unsigned long int somaDTR (unsigned int n, unsigned int p)
{
	if (n<10)
		return p+n;
	
	//p += n%10;
	return somaDTR(n/10, p+n%10);
}

int main ()
{
	unsigned long int x;


	scanf("%ld",&x);

	printf( "%ld \n", somaDTR(x,0) );
	return 0;
}