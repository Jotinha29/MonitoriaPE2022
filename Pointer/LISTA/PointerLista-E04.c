/*
4) Crie um programa que contenha uma matriz de float com três linhas e três colunas. 
Imprima o endereço de cada posição dessa matriz.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 3

int main (){
	system("cls");
	
	float a[TAM][TAM];
	int x, y, *pA;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(x=0; x<TAM; x++){
		for(y=0; y<TAM; y++){
			printf("Digite um valor: ");
			scanf("%f", &a[x][y]);
		}
	}
	
	for(x=0; x<TAM; x++){
		for(y=0; y<TAM; y++){
			pA = &a[x][y];
			printf("\nENDEREÇO DA COLUNA %d: %d\n", x+1, pA);
		}
	}
		
	system("pause");
	return 0;
}
