#include <stdio.h>

int main(){
	
	int x; 
	struct cadastro{
		char nome[3][40];
		char endereco[3][100];
		char telefone[3][10];
	};
	
	struct cadastro pessoa;
	
	printf ("\n\t.....REGISTRO.....\n");
	
	for (x=0; x<3; x++){
		printf ("\nDigite o nome da pessoa %d: ", x+1);
		fflush (stdin);
		fgets  (pessoa.nome[x], 40, stdin);
		printf ("Digite o endereco da pessoa %d: ", x+1);
		fflush (stdin);
		fgets  (pessoa.endereco[x], 100, stdin);
		printf ("Digite o telefone da pessoa %d: ", x+1);
		fflush (stdin);
		fgets  (pessoa.telefone[x], 10, stdin);
	} 
	
	printf ("\n\t.....PESSOAS REGISTRADAS.....\n");
	
	for (x=0; x<3; x++){
		printf ("\n.....Pessoa-%d.....\n\n", x+1);
		printf ("|NOME| %s", pessoa.nome[x]);
		printf ("|End.| %s", pessoa.endereco[x]);
		printf ("|TEL.| %s", pessoa.telefone[x]);
	}
	
	return 0;
}
