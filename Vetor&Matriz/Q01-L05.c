#include <stdio.h>

int main(){
	
	char n1[30], n2[30], n3[30], E1[150], E2[150], E3[150];
	int T1, T2, T3;
	
	printf("SOMENTE O PRIMEIRO NOME DE CADA USUaRIO\n");
	printf("Informe 1o nome:");
	scanf ("%s", &n1);
	printf("Informe 2o nome:");
	scanf ("%s", &n2);
	printf("Informe 3o nome:");
	scanf ("%s", &n3);
	
	printf("\nINFORME SEU ENDEREÇO ASSIM:");
	printf("\nRUA00-lote00-casa00\n");
	printf("\nInforme 1o endereco:");
	scanf ("%s", &E1);
	printf("Informe 2o endereco:");
	scanf ("%s", &E2);
	printf("Informe 3o endereco:");
	scanf ("%s", &E3);
	
	printf("\nTELEFONE CELULAR\n");
	printf("\nInforme 1o telefone:");
	scanf("%d", &T1);
	printf("Informe 2o telefone:");
	scanf("%d", &T2);
	printf("Informe 3o telefone:");
	scanf("%d", &T3);
	
	printf ("\nCADASTRO: \n");
	printf ("Pessoa 01: \n");
	printf ("Nome....: %s\n", n1);
	printf ("Endereco: %s\n", E1);
	printf ("Telefone: %d\n", T1);
	printf ("\nPessoa 02: \n");
	printf ("Nome....: %s\n", n2);
	printf ("Endereco: %s\n", E2);
	printf ("Telefone: %d\n", T2);
	printf ("\nPessoa 03: \n");
	printf ("Nome....: %s\n", n3);
	printf ("Endereco: %s\n", E3);
	printf ("Telefone: %d\n", T3);
	
	return 0;
}
