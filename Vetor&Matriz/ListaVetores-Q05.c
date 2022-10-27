//Faça um algoritmo que calcule e escreva o somatório 
//dos valores armazenados num vetor de até 100 
//elementos numéricos a serem lidos.

#include <stdio.h>

int main (){
	
	int v[100];
	int x, total = 0;
	
	printf ("Informe o numero desejado :");
	for (x =0; x < 100; x++){
		scanf("%d", &v[x]);
	}
	
	for (x =0; x < 100; x++){
		total+=v[x];
	}

	printf("%d", total);
	
	return 0;
}
