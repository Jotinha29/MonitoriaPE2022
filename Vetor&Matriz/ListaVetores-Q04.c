//Faça um algoritmo que leia até 30 letras e 
//as escreva na ordem inversa (ou contrária) da que
//foram lidas.
#include <stdio.h>
#include <stdlib.h>

int main(){

	int x;
	char l[1][30];

	for(x=0;x<30;x++){
		printf("Informe a letra %d: ",x+1);
		gets(l[x]);
	}

	printf("\n...LETRAS em ordem inversa...\n");
	
	for(x=30;x>=0;x--){
		printf("%s\n",l[x]);

	}
	
return 0;
}

