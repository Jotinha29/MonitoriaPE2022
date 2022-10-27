#include<stdio.h>
#include <math.h>

float adicao(float num1, float num2);
float subtrair (float num1, float num2);
float multi(float num1, float num2);
float divisao(float num1, float num2);
float resultado1;
void printMenu(void);

int main(){
	
	void printMenu(void);
	float num1, num2, raiz;
	int opcao, x;
	
	printMenu();
	printf("Informe a operacao desejada: ");
	scanf("%d", &opcao);
	
	//for (x=0; x<1; x++){
	//} fazer com vetor dps
	
	printf ("Informe 2 valores: ");
	scanf  ("%f%f", &num1, &num2);
	
	switch(opcao){
		case 1:
			printf("Resultado: %f + %f = %f\n", num1, num2, adicao(num1, num2));
		break;
		case 2: 
			printf("Resultado: %f - %f = %f\n", num1, num2, subtrair(num1, num2));
		break;
		case 3: 
			printf("Resultado: %f x %f = %f\n", num1, num2, multi(num1, num2));
		break;
		case 4: 
			printf("Resultado: %f / %f = %f\n", num1, num2, divisao(num1, num2));
		break;	
	}

	//raiz = sqrt(resultado); 
	//printf("%f\n", raiz);
	
	return 0;
}

void printMenu(void){
	printf("Operacoes dispomiveis: ");
	printf("\n|1-Adicao........(+)|");
	printf("\n|2-Subtracao.....(-)|");
	printf("\n|3-multiplicacao.(x)|");
	printf("\n|4-divisao.......(/)|\n");
	}

float adicao (float num1, float num2){ 
    float resultado; 
    resultado1 = num1 + num2; 
    return resultado1 + resultado; 
}

float subtrair (float num1, float num2){
    float resultado;
    resultado = num1 - num2;
    return resultado;
}

float multi(float num1, float num2){
	float resultado;
    resultado = num1 * num2;
    return resultado;
}

float divisao(float num1, float num2){
	float resultado;
    resultado = num1 / num2;
    return resultado;
}


