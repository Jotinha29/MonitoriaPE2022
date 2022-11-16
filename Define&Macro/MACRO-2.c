#include <stdio.h>
#define MAIOR(x, y) x > y ? x : y
#define E_MINUSCULO(char) char >= 'a' && char <= 'z' || char >= 'A' && char <= 'Z'

int main(){
	
	char x = 'x';
	
	if(E_MINUSCULO(x)){
		printf("E uma letra minuscula\n");
	} else {
		printf("Nao e uma letra minuscula\n");
	}
	
	printf("%d", MAIOR(1000, 50));
	
	
	getchar();
	return 0;
}
