#include <stdio.h>
#include <complex.h>
#include <math.h>

double delta (double a, double b, double c)
{
	return (b*b - 4*a*c);
}

double _Complex bhaskara (double a, double b, double c)
{
	double  x1, x2, c1, c1i;

	x1  = -b;
	x1 += sqrt( delta(a,b,c) );
	x1 /= 2*a;

	x2  = -b;
	x2 -= sqrt( delta(a,b,c) );
	x2 /= 2*a;	

  c1 = -b;
  c1 /= 2*a;
  
  c1i = delta(a,b,c);
  c1i /= 2*a;
  
	if (delta(a,b,c)>=0)
		printf("%.3lf %.3lf \n", x1, x2 );
	else
		printf("%.3lf %.3lfi %.3lf %.3lfi \n", c1, c1i, c1,-c1i );

}

int main ()
{
	double a, b, c;

	scanf("%lf %lf %lf",&a, &b, &c);

	bhaskara(a,b,c);
	
	return 0;
}

