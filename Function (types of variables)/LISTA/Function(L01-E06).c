#include <stdio.h>

float peso, altura;

int main(){
	
	void listaIMC();
	float IMC (float x, float y);
	
	printf("IMC\nInforme o peso: ");
	scanf ("%f", &peso);
	printf("Informe a alrura: "); 
	scanf ("%f", &altura);

	IMC(peso, altura);
	listaIMC();
}

float IMC (float x, float y){
	
	float IMC;
	
	IMC = peso/(altura*altura);
	
	printf("\n|IMC Pessoal\t\t| %.2f\t\t\t\t|\n", IMC);
}

void listaIMC(){
	
	printf("\n|abaixo 18,5\t\t| abaixo do peso\t\t|\n");
	printf("|entre 18,6 e 24,9\t| peso ideal\t\t\t|\n");
	printf("|entre 25,0 e 29,9\t| Levemente a cima do peso\t|\n");
	printf("|entre 30,0 e 34,9\t| Obesidade grau I\t\t|\n");
	printf("|entre 35,0 e 39,9\t| Obesidade grau II(severa)\t|\n");
	printf("|acima de 40\t\t| Obesidade grau III(morbida)\t|\n");
}
