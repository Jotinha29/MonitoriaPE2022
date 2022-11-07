#include <stdio.h>

float pi = 3.14;
float raio, altura;

int main(){
	
	float volume (float x, float y);
	
	printf("VOLUME ESFERA\nInforme o raio: ");
	scanf ("%f", &raio);
	printf("Informe a alrura: "); 
	scanf ("%f", &altura);

	volume(raio, altura);
}

float volume (float x, float y){
	
	float V;
	float raioCubo;

	raioCubo = raio*raio*raio;
	
	V = pi*altura*raioCubo;
	
	printf("Volume = %.2f", V);
}
