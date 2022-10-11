#include <stdio.h>

int main(){
	
	int x; 
	struct cadastro{
		char nome[3][40];
		char endereco[3][100];
		char telefone[3][10];
	};
	
	struct cadastro pessoa;
	
	for (x=0; x<3; x++){
		printf ("Digite o nome da pessoa %d: ", x+1);
		fflush (stdin);
		fgets  (pessoa.nome[x], 40, stdin);
		printf ("Digite o endereco da pessoa %d: ", x+1);
		fflush (stdin);
		fgets  (pessoa.endereco[x], 100, stdin);
		printf ("Digite o telefone da pessoa %d: ", x+1);
		fflush (stdin);
		fgets  (pessoa.telefone[x], 10, stdin);
	}
	for (x=0; x<3; x++){
		printf ("\n%s", pessoa.nome[x]);
		printf ("\n%s", pessoa.endereco[x]);
		printf ("\n%s", pessoa.telefone[x]);
	}
	
	return 0;
}
