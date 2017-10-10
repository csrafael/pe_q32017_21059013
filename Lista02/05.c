#include <stdio.h>


unsigned long int fat (int x)
{
	unsigned long int r = 1;
	
	while (x>1)
	{
		r *=x;
		x--;
	}

	return r;
}
unsigned long int coefBinomial (int n, int k)
{
	unsigned long int resp;

	resp  = fat(n);
	resp /= fat(k);
	resp /= fat(n-k);

	return resp;

}

unsigned int main ()
{
	int n,k;

	unsigned long int  resp;

	scanf("%d %d", &n, &k);

	resp = coefBinomial(n,k);
	printf("%ld \n", resp );

	return 0;
}