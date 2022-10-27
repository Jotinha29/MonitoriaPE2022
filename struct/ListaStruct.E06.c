/*
Definir a estrutura cuja representação gráfica é dada a seguir,
definir os campos com os tipos básicos necessários:
a) Crie um vetor Cadastro com 5 elementos;
b) Permita ao usuário entrar com dados para preencher 
esses 5 cadastros;
c) Encontre a maior idade cadastrada;
d) Encontre as pessoas do sexo masculino;
e) Encontre as pessoas com salário maior que 1000;
f) Imprima os dados da pessoa cuja a identidade seja igual
a um valor fornecidopelo usuário.
*/
#include <stdio.h>
#include <string.h>
#define TAM 3


struct endereco{
	char rua[10], bairro[10], cep[10];
	char cidade[10], estado[2];
};

struct cadastro {
	char nome[15], rg[10], cpf[15];
	char estadoCivil[10], tel[10], sexo;
	int idade;
	float salario;
	struct endereco end;
};

int main(){
	
	struct cadastro cliente [5];
	int x, maiorIdade = -1;
	
	
	for(x=0; x<TAM; x++){
		printf("_________CADASTRO________");
		printf("\n\nInforme seu nome........: ");
        fflush(stdin);
		fgets (cliente[x].nome, 15, stdin);//usar somente para string
		printf("Informe seu salario.....: ");
		fflush(stdin);
		scanf ("%f", &cliente[x].salario);
		printf("Informe sua idade.......: ");
		fflush(stdin);
		scanf ("%d", &cliente[x].idade);
		printf("Informe seu sexo........: ");
		fflush(stdin);
		scanf ("%c", &cliente[x].sexo);
		printf("Informe seu RG..........: ");
		fflush(stdin);
		fgets (cliente[x].rg, 10, stdin);
		printf("Informe seu cpf.........: ");
		fflush(stdin);
		fgets (cliente[x].cpf, 15, stdin);
		printf("Informe seu Estado civil: ");
		fflush(stdin);
		fgets (cliente[x].estadoCivil, 10, stdin);
		printf("Informe seu telefone....: ");
		fflush(stdin);
		fgets (cliente[x].tel, 11, stdin);
		printf("Informe sua cidade......: ");
		fflush(stdin);
		fgets (cliente[x].end.cidade, 10, stdin);
		printf("Informe seu estado......: ");
		fflush(stdin);
		fgets (cliente[x].end.estado, 2, stdin);
		printf("Informe sua rua.........: ");
		fflush(stdin);
		fgets (cliente[x].end.rua, 10, stdin);
		printf("Informe seu cep.........: ");
		fflush(stdin);
		fgets (cliente[x].end.cep, 8, stdin);
		printf("Informe seu bairro......: ");
		fflush(stdin);
		fgets (cliente[x].end.bairro, 10, stdin);
		printf("\n");
	}
	
	for (x=0; x<TAM; x++){
		if(cliente[x].idade > maiorIdade){
			maiorIdade = cliente[x].idade;
		}
	}
	
	printf ("___________________________");
	printf ("\nMaior idade cadastrada: %d\n", maiorIdade);
	printf ("___________________________\n");
	
	char clienteM[5][15];
	char clienteS[5];
	
	for (x=0; x<TAM; x++){
		if (cliente[x].sexo == 'm' ||cliente[x].sexo == 'M'){
			//clienteS[x] = cliente[x].sexo;
			strcpy(clienteM[x], cliente[x].nome);
		}
	}
	
	printf("\nHomens cadastrados:\n");
	
	for (x=0; x<TAM; x++){
		printf("%s", &clienteM[x]);
	}
	
	printf ("\n___________________________\n");
	
	for (x=0; x<TAM; x++){
		if(cliente[x].salario > 1000){
			printf("Nome: %s Salario: %.2f\n", cliente[x].nome, cliente[x].salario);
		}
	}
	
	printf ("___________________________");
	
	//int rgPesquisa;
	
	//printf("Digite o valor a ser pesquisado: ");
	//scanf("%d", &rgPesquisa);
	
	//for (x=0; x<1000000000; x++){
	//	if (cliente[x].rg == rgPesquisa){
	//		printf("Imprimir todos os dados|");
	//		break;
	//	}
	//	char rgPesquisa[15];
	//	printf("Digite o valor a ser pesquisado: ");
	//	scanf("%s", &rgPesquisa);
	//	
	//	for (x=0; x<5; x++){
	//		if (strcmp (rgPesquisa, cliente[x].rg) == 0){
	//			printf("Imprimir todos os dados|");
	//			break;
	//		}
	//	}
	//}
	return 0;	
}
