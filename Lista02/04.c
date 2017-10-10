#include <stdio.h>
#include <stdlib.h>

float soma (float x, float y)
{
	return x+y;
}

float subt (float x, float y)
{
	return x-y;
}

float mult (float x, float y)
{
	return x*y;
}

float divisao (float x, float y)
{
	return x/y;
}

float pot (float x, float y)
{
	float resp = 1.0;
	
	if (y==0)
		return resp;
	
	else if (y<0) {
		for ( int count = 0; count>y; count-- ) {
			resp /= x; 
		}
		return resp;		
	}
	
	else {
		for ( int count = 0; count<y; count++ ) {
			resp *= x; 
		}
		return resp;		
	}

}

float calculadora (int f, float x, float y)
{
	switch (f) {
		case 1:
				return soma(x,y);

		case 2:
				return subt(x,y);

		case 3:
				return mult(x,y);

		case 4:
				return divisao(x,y);

		case 5:
				return pot(x,y);

		default:
				printf("sem função");

	}
}

int main()
{
	int f;
	float x,y;

	scanf ( "%d %f %f", &f, &x, &y );
	printf( "%f \n", calculadora(f,x,y) );
	
	return 0;
}