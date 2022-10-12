#include <stdio.h>

int main(){
	
	void teste(void);
	
	teste();
	teste();
	teste();
	
	return 0;
}

void teste (void){

	int VariavelLocalAutomatica = 2;
	VariavelLocalAutomatica*=2;
	
	static int VariavelLocalEstatica= 2;
	// nao vai perder o valor
	VariavelLocalEstatica*=2;
	
	printf ("\n Local Estatica.. = %d", VariavelLocalAutomatica);
	printf ("\n Local Automatica = %d", VariavelLocalEstatica);
}
