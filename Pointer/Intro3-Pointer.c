#include <stdio.h>

int main(){
	
	int x = 10;
	double y = 20.50;
	char z = 'a';
	
	int *pX = &x;// O endereço do pointer é igual ao endereço de X.
	//              pX = &x; O endereço do pointer é igual ao endereço de X.
	//             *pX = &x; O endereço do pointer é igual ao valor de X(10).
	double *pY = &y;
	char *pZ = &z;
	
	printf("Valor INT...: %d\n", *pX);
	printf("Endereco INT: %d\n", pX);
	printf("\nValor DOUBLE...: %f\n", *pY);
	printf("Endereco DOUBLE: %d\n", pY);
	printf("\nValor CHAR...: %c\n", *pZ);
	printf("Endereco CHAR: %d\n", pZ);
	
	// *pX = valor
	//  pX = Endereço
	
	//manipulção com poniter
	double soma = *pX + *pY;
	
	printf("\nSoma(ponteiros)");
	printf("\n%d(*pX) + %.2f(*pY) = %.2f\n", *pX, *pY, soma);
	
	//pegando o endereço de uma variavel e atribuindo ao pointer
	int *p= 6487540;// apos printar o endereço no 1o printf, igualar o endereço(numerico) ao *p
	printf("\nValor INT...: %d\n", *p);
	
	getchar();
	return 0;
}
