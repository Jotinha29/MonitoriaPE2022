#include <stdio.h>

float pi = 3.14;

struct cilindro{
	float raio;
	float altura;
}C;

float volume (struct cilindro C);

int main(){
	
	float volume (struct cilindro C);

	printf("VOLUME CILINDRO\nInforme o raio: ");
	scanf ("%f", &C.raio);
	printf("Informe a alrura: "); 
	scanf ("%f", &C.altura);

	volume(C);
}

float volume (struct cilindro C){
	
	float V;
	float raioQuadrado;
	
	raioQuadrado = C.raio*C.raio;
	
	V = pi*C.altura*raioQuadrado;
	
	printf("Volume = %.2f", V);
}
