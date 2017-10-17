#include <stdio.h>

double cToF (double num)
{
	double r = num;
	r *= 9/5;
	r += 32;
	return r;
}

double cToK (double num)
{
	return (num+273.15);
}

double fToC (double num)
{
	double r = num;
	r -= 32;
	r *= 5/9;
	return r;
}

double fToK (double num)
{
	double r = num;
	r += 459.67;
	r *= 5/9;
	return r;
}

double kToC (double num)
{
	return (num-273.15);
}

double kToF (double num)
{
	double r = num;
	r *= 9/5;
	r -= 459.67;

	return r;
}

void changeTemp (int in, int out, double num )
{
	int f;
	double resp = 0;

	f = in;
	f *= 10;
	f += out;

	switch (f) {
		case 11:
				resp = num;
				printf("%.2f C\n", resp );

		case 12:
				resp = cToF(num);
				printf("%.2f F\n", resp );

		case 13:
				resp = cToK(num);
				printf("%.2f K\n", resp );
		case 21:
				resp = fToC(num);
				printf("%.2f C\n", resp );

		case 22:
				resp = num;
				printf("%.2f F\n", resp );
		case 23:
				resp = fToK(num);
				printf("%.2f K\n", resp );
		case 31:
				resp = kToC(num);
				printf("%.2f C\n", resp );
		case 32:
				resp = kToF(num);
				printf("%.2f F\n", resp );
		case 33:
				resp = num;
				printf("%.2f K \n", resp );
		default:
				printf("Conversor de temperatura sem função");

	}
}

double binToDec(double num)
{
    int resto, i =0; 
    double d = 0;
    while(n != 0) {
        resto = n%10;
        n /= 10;
        d += resto*pow(2,i);
        ++i;
    }
    return decimal;
}

double decToBin(double n)
{
	int resto, i = 0;
	double b = 0;
	while(n != 0) {
        	resto = n%2;
        	n /= 2;
        	b += resto*i;
        	i *= 10;
    	}
    	return b;
}

double changeBase (int in, int out, double num )
{
	int f;
	double resp = 0;

	f = in;
	f *= 10;
	f += out;


	switch (f) {
		case 11:
				resp = num;
				return resp;

		case 12:
				resp = decToBin(num);
				return resp;

		case 21:
				resp = binToDec(num);
				return resp;

		case 22:
				resp = num;
				return resp;
		default:
				printf("Conversor de base sem função");

	}

}

void conversor (int f, int in, int out, double num)
{
	

	if (f==1)
		changeTemp(in, out, num);
	else if (f==2)
		changeBase(in, out, num);
	else
		printf("Erro! sem função para esse número \n" );

}

int main ()
{
	int f, in, out;
	double num;

	scanf("%d %d %d %f", &f, &in, &out, &num);

	conversor(f,in,out,num);

	return 0;

}
