#include <stdio.h>
#include <math.h>

long double algGL()
{
	long double a, a1, b, t, p;
	long double r;

	int count =0;
	a = 1.0;
	b = 1.0;
	b /= ( sqrt(2) );
	t = 1.0/4.0;
	p = 1.0;

	while (count <10) {

		a1 	= (a+b);
		a1 /= 2;

		b   = sqrt( (a*b) );
		
		t  -=  p*(a-a1)*(a-a1);
		
		p  *= 2;
		
		a 	= a1;

		count++;
	}

	r 	= (a+b);
	r  *= (a+b);
	r  /=  4*t;

	return r;

}

int main ()
{

	printf("%.20Lf \n", algGL() );

	return 0;
}