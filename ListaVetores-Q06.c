#include <stdio.h>

int main (){
	
	int m[5], s[5], x, smaior, smenor = 999999999;
	
	
	for (x =0; x < 5; x++){
		printf ("Informe a matricula do %d funcionario: ", x+1);
		scanf  ("%d", &m[x]);
	}
	
	for (x =0; x < 5; x++){
		printf ("Informe o salario do %d funcionario: ", x+1);
		scanf  ("%d", &s[x]);
	}
	
	for (x =0; x < 5; x++){
		if (s[x] < smenor){
			smenor = s[x];
		} else if (smaior < s[x]){
			smaior = s[x];
		}
	}

	printf ("\n...Tabela Funcionarios...\n");
	for (x = 0; x < 5; x++){
		printf ("Funcionario %d\n", x+1);
		printf ("MATRICULA: %d\n", m[x]);
		printf ("SALARIO..: R$%d,00\n", s[x]);
	}
	printf ("\n......................\n");
	printf ("MENOR SALARIO: R$%d,00\n", smenor);
	printf ("MAIOR SALARIO: R$%d,00\n", smaior);
	return 0;
}
