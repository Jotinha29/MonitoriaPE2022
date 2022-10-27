//revisao de vetores
#include <stdio.h>

int main (){
	//indice = 5, vetor/array = 0-4
 	//maneira correta, mas mais extensa
	//nota[0] = 10; //endereço 0
	//nota[1] = 9;  //endereço 1
	//nota[2] = 8;  //...
	//nota[3] = 7;  //...
	//nota[4] = 6;  //endereço 4
	float nota[5] = {10, 9, 8, 7, 6}; // maneira mais "bonita" e mais facil de fazer
	
	int x;
	
	for (x = 0; x < 5; x++){
		printf("%f\n", nota[x]);
		
		return 0;
	}
}
