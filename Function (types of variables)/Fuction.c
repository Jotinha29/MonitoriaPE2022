#include <stdio.h>
//programa para mostrar visualmente o que a function faz
int main (){
	
	void funcaoPrint(int x, int vetor[]);
	int x = 10;
	int vetor [3] = {10};
	//passa o valor das variaveis da main pra a fuction 
	funcaoPrint(x, vetor);//realiza o que esta na function
	
	//imprimi o valor das variaveis da main	
	printf ("Variavel int da funcao main.-> %d \n", x);
	printf ("Vetor na funcao main........-> %d \n", vetor [1]);
	
	return 0;
}

void funcaoPrint(int x, int vetor[]){

	x = x + 10;		//alterando o valor das variaveis da main
	vetor [1] = 20; //para obterum novo valor na fuction
	
	printf ("Variavel int da function.-> %d \n", x);
	printf ("Vetor na function........-> %d \n\n", vetor [1]);
	/*printf dos valores alterados na function
	OBS.: somente quando a function for usada (Linha 9)*/
	
	//return x; o valor alteraria para o original
	//ja com o vetor passa um um endereço, um index, 
	//mesmo com o return nao alteraria 
}
