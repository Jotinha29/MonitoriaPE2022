/*
2) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. 
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	int a, b;
	int *pA, *pB;
	
	pA = &a;
	pB = &b;
	
	printf("Informe dois valores inteiros:\n1o: ");
	fflush(stdin);
	scanf("%d", &a);
	printf("2o: ");
	fflush(stdin);
	scanf("%d", &b);
	
	setlocale(LC_ALL, "Portuguese");// função da biblioteca locale.h
	
	if (*pA>*pB){
		printf("1o Valor (%d) é MAIOR e seu endereço é %d", *pA, pA);
	} else {
		printf("2o Valor (%d) é MAIOR e seu  endereço é %d", *pB, pB);
	}
	
	//o endereço de um sempre vai ser maior, porque aumentra 4 bytes
	
	getchar();
	return 0;
}

