/*
cadastre os preços de até 100 diferentes CDs 
aumento de valor em 10% para todos os CDs
aumento percentual informado pelo vendedor para todos os CDs
apresentar o percentual de aumento para cada CD
apresentar o valor sem aumento e o valor com aumento
*/
#include <stdio.h>

int main (){
	
	int x;
	float ValorCD[5], Valor10[5], percentual, ValorVendedor[5];
	
	for (x =0; x < 5; x++){
		printf ("Informe o valor do CD %d: ", x+1);
		scanf  ("%f", &ValorCD[x]);
	}
	
	for (x =0; x < 5; x++){
		Valor10[x] = (ValorCD[x] * 0.10) + ValorCD[x];
	}
	
	for (x =0; x < 5; x++){
		printf ("Informe o percentual de aumento para os CDs: ");
		scanf  ("%f", &percentual);
		ValorVendedor[x] = ((ValorCD[x]	* percentual)/100) + ValorCD[x];
	}
	
	printf ("\n...Tabela Preco CDs...\n");
	for (x = 0; x < 5; x++){
		printf ("Funcionario %d\n", x+1);
		printf ("PRECO.S/.AUMENTO..........: R$%.2f\n", ValorCD[x]);
		printf ("PRECO.C/.AUMENTO.10%%......: R$%.2f\n", Valor10[x]);
		printf ("PRECO.C/.AUMENTO.INFORMADO: R$%.2f\n", ValorVendedor[x]);
	}
	
	
	return 0;
}
