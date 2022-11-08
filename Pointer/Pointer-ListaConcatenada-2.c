#include <stdio.h>

struct lista {
	int valor;
	struct lista *proximo;
};

//           nome           recebe um     pointer, um valor 
struct lista *procurarValor(struct lista *pLista, int valor){
	// a função retorna o endereço de memoria de tipo struct 
	while (pLista != (struct lista *)0){
		if (pLista->valor == valor){
			// se o valor que o usuario informar for igual ao valor da lista,
			// entao o valor foi pesquisado foi encontrado
			return(pLista);
		} else {
			// caso nao for encontrado ira para o proximo valor da lista
			// ate achar o valor informado
			pLista = pLista->proximo;
		}
	}
	// caso nao encontre retorna um valor nulo, ou seja, nada foi encontrado 
	return(struct lista *)0; 
}

int main(){
	
	struct lista *procurarValor(struct lista *pLista, int valor);
	struct lista m1, m2, m3;// membros da lista concatenada, do tipo struct
	struct lista *resultado, *gancho = &m1;// dois pointer de tipo struct 
	int valor;
	
	m1.valor = 5;
	m2.valor = 25;
	m3.valor = 125; 
	
	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = (struct lista *) 0;
	
	printf("Digite um valor de 5 elevado a algum numero: ");
	scanf ("%d", &valor);
	
	resultado = procurarValor(gancho, valor);	
	
	if (resultado == (struct lista *)0){
		printf("VALOR NAO ENCONTRADO. \n");
	} else {
		printf("VALOR %d ENCONTRADO. \n", resultado->valor);
	}
	
	system ("pause");
	return 0; 
}
