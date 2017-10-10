#include <stdio.h>

float calcVol(float c, float l, float h)
{
	return c*l*h;
}
int main ()
{
	float c, l, h;

	scanf("%f %f %f", &c,&l,&h);

	printf( "%.2f \n", calcVol(c,l,h) );
	return 0;
}