/*
1) Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.
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
	
	if (pA>pB){
		printf("1o é MAIOR seu endereço é %d", pA);
	} else {
		printf("2o é MAIOR seu endereço é %d", pB);
	}
	
	//o endereço de um sempre vai ser maior, porque aumenta 4 bytes.
	
	getchar();
	return 0;
}
