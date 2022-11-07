#include <stdio.h>

int main (){
	
	int x = 10;  // dou o valor 20 para X
	int *pointer;// ponteiro nomeado, variavel 
	pointer = &x;// ponteiro = endereço de X
	
	int y = 20;  // Y = 20
	*pointer = y;// ponteiro (endereço de X) = valor de Y (20)
	
	printf("x = %d, y = %d", x, y);
	
	getchar();
	return 0;
}
