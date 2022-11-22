/*
3) Crie um programa que contenha um array de float com 10 elementos. Imprima o endereço de cada posição desse array.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 10

int main (){
	system("cls");
	
	float a[TAM];
	int x, *pA;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(x=0; x<TAM; x++){
		printf("Digite um valor: ");
		scanf("%f", &a[x]);
	}
	
	for(x=0; x<TAM; x++){
		pA = &a[x];
		printf("\nENDEREÇO DO VALOR %d: %d\n", x+1, pA);
	}
	
	system("pause");
	return 0;
}
