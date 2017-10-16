#include <stdio.h>
#include <math.h>

//Total de memoria +/- 28 bytes

float dist_eucl (int x[], int y[], int n)
{	
	int i;
	float d = 0.0;

	for (i=0; i<n; i++){
		d += (x[i]-y[i]) * (x[i]-y[i]); 
	}
	return sqrt (d);
}
float media_euclidiana (int x[][2], int n, int i )
{
	float media = 0.0;
	int j;

	for ( j = 0; j<n; j++ ) {
		media +=  dist_eucl(x[i],x[j],2);
	}

	return media/n;
}