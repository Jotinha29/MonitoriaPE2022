/*os três empregados mais recentes
ler número indeterminado de informações (máximo de 50) 
com matrícula do empregado 
com os meses de trabalho deste empregado
Mostre os três empregados mais recentes. 
Não existem dois empregados admitidos no mesmo mês e
a matrícula igual a zero ‘0’ encerra a leitura.
*/
#include <stdio.h>

int main(){
	
	int x, y, menosMeses;
	int matricula[5], meses[5];
	
	//printf ("Digite 1 para começar o programa e 0 para sair: ");
	//scanf  ("%d", &matricula[x]);
	
	//while (matricula[x]!= 0){
		for (x =0; x < 5; x++){
		printf ("Informe o resgitro do empregado %d: ",x+1);
		scanf  ("%d", &matricula[x]);
		printf ("Informe os meses trabalhados do empregado %d: ",x+1);
		scanf  ("%d", &meses[x]);
		if (meses[x] < meses[x+1]){
			menosMeses = matricula[x];
		}
	}
	//}
	for (x =0; x < 5; x++){
		if (meses[x] < meses[x+1]){
			menosMeses = matricula[x];
		}
	}
	
	printf ("Esse e' o funcionario mais novo %d", menosMeses);
	
	return 0;
}
