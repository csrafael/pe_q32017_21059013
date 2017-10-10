#include <stdio.h>

int parOuImpar (int n)
{
	if (n%2!=0)
		return 1;
}
int main ()
{
	int num;

	scanf("%d", &num);

	printf("%d \n", parOuImpar(num) );

	return 0;
}
