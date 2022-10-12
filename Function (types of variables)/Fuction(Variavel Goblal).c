#include <stdio.h>
//g na frente só para indentificação que essa é uma variavel global
int gVariavelGlobal = 2;

int main(){
	
	void teste(void);
	
	// posso acessar a variavel global aqui, nesse caso com o printf
	printf (" |Global.......... | 0%d|", gVariavelGlobal = 2);
	teste();
	teste();
	
	return 0;
}

void teste (void){

	int VariavelLocalAutomatica = 2;
	VariavelLocalAutomatica*=2;
	
	static int VariavelLocalEstatica= 2;
	VariavelLocalEstatica*=2;
	
	gVariavelGlobal *=2;
	
	printf ("\n |Local Estatica.. | 0%d|", VariavelLocalAutomatica);
	printf ("\n |Local Automatica | 0%d|", VariavelLocalEstatica);
	printf ("\n |Global.......... | 0%d|", gVariavelGlobal);
	/* a variavel global pode ser utilizada em qualquer function
	a variavel global age como uma estatica ou seja ela guarda o valor*/ 
}
