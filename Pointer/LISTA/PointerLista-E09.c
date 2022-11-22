/*
9) Crie uma função que receba como parâmetro um vetor e o imprima. 
Não utilize índices para percorrer o vetor, apenas aritmética de ponteiros.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

void print(int *pVetor){
	int x;
	
	printf("[");
	for(x=0; x<5; x++){
		printf("%d, " *pVetor);
	}
	printf("]");
}

int main(){
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	int x, vetor[TAM];
	int *pV;
	
	for(x=0; x<TAM; x++){
		pV = &vetor[TAM];
		printf("Informe os valores do vetor[%d]: ");
		scanf("%d", pV);
	}
	
	system("pause");
	return 0;
}
