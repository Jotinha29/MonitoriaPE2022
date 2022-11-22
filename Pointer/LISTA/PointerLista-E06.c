/*
6) Crie um programa que contenha um array com cinco elementos inteiros. 
Leia esse array do teclado e imprima o endereço das posições contendo valores pares.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 5

int main (){
	system("cls");
	
	int a[TAM];
	int x, *pA;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(x=0; x<TAM; x++){
		pA = &a[x];
		printf("\nDigite um valor: ");
		scanf("%d", pA);
		
		if(*pA % 2 == 0){
			printf("\nENDEREÇO DO VALOR %d é %d\n", x+1, pA);
		}
	}
	
	system("pause");
	return 0;
}
