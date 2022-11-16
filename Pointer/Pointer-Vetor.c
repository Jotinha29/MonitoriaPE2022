#include <stdio.h>

int main (){
	
	int vetor[3] = {1,2,3};
	int *pVetor = vetor;// caso deixe assim o pointer vai pegar o endereço do 1 valor
/*	int *pVetor = &vetor[2]; nesse caso o [endereço], 
	vai ser direcionado "forçado" a ir para o que foi digitado entre []
*/

	printf ("%d", *pVetor);

	getchar();
	return 0;
}
