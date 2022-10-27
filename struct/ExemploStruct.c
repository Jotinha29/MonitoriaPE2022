#include <stdio.h>

int main (){
	// esqueleto do struct
	struct horario{
	int horas;
	int minutos;
	int segundos;
	double exemplo;
	char ex;
	};
	/*definido o esqueleto, agora posso definir o struct
	somente após esse esqueleto feito, a variavel do struct 
	será iniciada*/
	struct horario agora;
	//nomeVariavelStruct.VariavelDentroDoEsqueleto = valor;
	agora.horas = 15;
	agora.minutos = 17;
	agora.segundos = 30; 
	agora.exemplo = 50.55/123;
	agora.ex = 'a';
	
	printf("\t----HORARIO----");
	printf ("\n\t....%d:%d:%d...\n", agora.horas, agora.minutos, agora.segundos);
	/*numa struct diferente de um vetor, voce pode trabalhar 
	com mais de um tipo de varivel em somente um struct, se
	essa varivel estiver dentro do esqueleto*/
	printf("\nOutros tipos de variaveis:");
	printf("\n-CHAR:...%c", agora.ex);
	printf("\n-DOUBLE:.%f", agora.exemplo);
	
	return 0;
}
