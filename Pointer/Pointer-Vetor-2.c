#include <stdio.h>

int main (){
	
	int vetor[3] = {1,2,3};
	int x;
	
	// mascara %p é a correta para mostrar o endereço da memoria 
	// int = 4 bits, logo em vetor os endereços pulam de 4 em 4 
	int *pVetor = vetor;	
	printf ("ENDERECO 1 POINTER: %p\n", pVetor);//062FE00 
	
	pVetor = &vetor[1];	
	printf ("ENDERECO 2 POINTER: %p\n", pVetor);//062FE04

	pVetor = &vetor[2];	
	printf ("ENDERECO 3 POINTER: %p\n", pVetor);//062FE08
	
	pVetor = &vetor[0];
	printf("\nENDERECO 0 DO VETOR: %d\n", *pVetor);
	
	pVetor = &vetor[0];
	++pVetor;// 0 + 1 = ao endereço 1 que é do valor do 2o membro do vetor
	printf("ENDERECO 1 DO VETOR: %d\n", *pVetor);
	
	pVetor = &vetor[0];
	++pVetor;// 0 + 1 = endereço 1 (2o membro)
	++pVetor;// 1 + 1 = endereço 2 (3o membro)
	printf("ENDERECO 2 DO VETOR: %d\n\n", *pVetor);
	
	// alterando em vetores c POINTER
	pVetor = &vetor[0];
	*(pVetor + 1) = 10;
	printf("APOS ALTERACAO:\n"); 
	printf("ENDERECO 1 DO VETOR: %d\n", pVetor[1]);
	
	getchar();
	return 0;
}
