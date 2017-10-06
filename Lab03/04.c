#include <stdio.h>

char ehPrimo (int n, int p)
{
	if (n%p==0)
		return 'N';
	else if (p==2)
		return'S';

	return ehPrimo(n,p-1);
}
int main ()
{
	unsigned long int x;
	char r;

	scanf("%ld",&x);

	if (x==2)
		printf(" S \n");
	else		
		printf( "%c \n ", ehPrimo(x, x/2) );
	return 0;
}