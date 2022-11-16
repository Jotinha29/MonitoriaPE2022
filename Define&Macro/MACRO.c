#include <stdio.h>
#define MAX 3
#define PI 3.14
#define MACRO(raio) raio * raio * PI

int main(){
	
	int x = 0, raio;
	
	while(x != MAX){
		printf("Area Circulo\n");
		printf("Informe raio do circulo: ");
		scanf ("%d", &raio);
		printf("%f\n", MACRO(raio));
		x++;
	}
}
