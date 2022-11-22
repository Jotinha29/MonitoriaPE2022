/*
5) Crie um programa que contenha um array de inteiros com cinco elementos. Utilizando apenas aritmética de ponteiros, 
leia esse array do teclado e imprima o dobro de cada valor lido.
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
		printf("\nDOBRO DO VALOR %d é %d\n", x+1, (*pA)*2);
	}
	
	system("pause");
	return 0;
}
