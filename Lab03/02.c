#include <stdio.h>

unsigned long int quantD (unsigned int n)
{
	if (n<10)
		return 1;

	return 1+quantD(n/10);
}

unsigned long int quantDTR (unsigned int n, unsigned int p)
{
	if (n<10)
		return p;
	return quantDTR(n/10, p+1);
}

int main ()
{
	unsigned long int x;
	unsigned long int r;

	scanf("%ld",&x);

	printf( "%ld \n", quantDTR(x,1) );
	return 0;
}