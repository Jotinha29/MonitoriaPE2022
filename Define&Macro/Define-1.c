#include <stdio.h>
#define PI 3.14159
#define NULO 0

double areaCirculo(double raio){
	return raio * raio * PI;
}

int main (){
	
	double r;
	int x = 3;
	
	while (x != NULO){
		printf("Digite o raio do circulo: ");
		scanf ("%lf", &r);
		printf("A area do circulo e %lf\n", areaCirculo(r));
		--x;
	}
	
	getchar();
	return 0;
}
