#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PI 3.14159265;
#define AREACIRC = PI/4;
#define LADOQ = 1;
#define CENTROX = 0.5;
#define CENTROY = 0.5;

int main()
{
	static int ptos_circ = 0;
	static int total = 0;

	float randX;
	float randY;

	srand( time(NULL) );


	for ( int i = 0; i < 100; ++i ) {

		randX = rand()%101;
		randY = rand()%101;

		randX /= 100;
		randY /= 100;

		printf("Numero %d: %f\n",i, randX);
		/*if (DentroDaCirc) {

			ptos_circ++;
			total++;
		}
		else {

		}*/

	}



	return 0;
}