#include <stdio.h>

int somarVetor(int vetor[], const int n){
	
	int soma = 0;
	int *pSoma;
	int *const finalVetor = vetor + n;// inicia com o vetor 0 + n que sera o valor passado no caso 10
	// endereco inicial  enquanto nao chegar no endereço final ++pSoma
	for (pSoma = vetor; pSoma < finalVetor; ++pSoma){
		soma += *pSoma;
	}
	return soma;
}

int main(){
	
	int somarVetor(int vetor[], const int n);
	int vetor[10] = {5,5,5,5,5,5,5,5,5,5};
	
	printf("A SOMA DOS MEMBROS DO VETOR = %d", somarVetor(vetor, 10));
	
	getchar();
	return 0;
}
