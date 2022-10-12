#include <stdio.h>

int main(){
	
	void teste(void);
	
	teste();
	teste();
	teste();	
	
	return 0;
}

void teste (void){
	/*essa variavel é local so pode ser usada dentro da 
	function, so dentro dela que pose ser "vista"
	automatica pq sempre que ela é executada, ela reinicia 
	e após isso ela é zerado, nao mantem 
	se rodar duas vezes o teste(); na function "int main" 
	vai aparecer o mesmo valor
	*/
	int VariavelLocalAutomatica = 2;
	VariavelLocalAutomatica*=2;
	
	printf ("\n Local Automatica = %d", VariavelLocalAutomatica);
}
