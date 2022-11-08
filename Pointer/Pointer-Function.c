#include <stdio.h>

int main(){
	
	void testeVariavel (int x);
	void testePonteiro (int *pX);
	int teste = 1;
	int *pTeste = &teste;
	//valor da L7
	printf ("VALOR TESTE MAIN: %d\n", teste);
	
	testeVariavel(teste);// roda a função e outro espaço na memoria é utilizado
	testePonteiro(pTeste);// endereço da memoria como parametro
	/*
	No primeiro caso (L12) criaça outro espaço na memoria, como se houvesse outra variavel
	----------------------------
	No segundo caso (L13) o endereço é passado como parametro para a funcao com isso não há 
	a chance de criação dessa "2a variavel".
	*/
	printf ("VALOR PONTEIRO MAIN:%d\n", teste);
	
	getchar();
	return 0;
}

void testeVariavel (int x){
	x++;
	// "2a variavel"
	printf ("VALOR TESTE FUNCAO:%d\n", x);
}

void testePonteiro (int *pX){
	++*pX;
}
