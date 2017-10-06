#include <stdio.h>

/*
unsigned int soma (int n, int p)
{
	if (n==1)
		return n;
	return ( n + soma(n-1) );
}
*/
unsigned int somaTR (unsigned int n, unsigned int p)
{
	if (n==1)
		return p+n;
	return somaTR(n-1, p+n);
}
int main()
{
	unsigned int num;
	//unsigned int r;

	scanf("%d", &num);

	

	printf( "%d \n", somaTR(num,0));

	return 0;
}
