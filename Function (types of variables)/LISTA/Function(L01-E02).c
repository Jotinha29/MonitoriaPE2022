#include <stdio.h>

int printMenu(int x);

int main(){
	
	int printMenu(int x);
	int x;
	
	printMenu(x);
	
}

int printMenu(int x){
	
	int mes;
	
	printf("\n|01 p/ Janeiro\t\t\t|");
	printf("\n|..............ate..............| ");
	printf("\n|12 p/ Dezembro\t\t\t|\n");
	printf("Informe o mes desejado: ");
	scanf ("%d", &mes);
	
	switch(mes){
		case 1:
			printf("\nJaneiro");
			printf("\nQtd Dias: 31");
		break;
		case 2: 
			printf("\nFeveiro");
			printf("\nQtd Dias: 28 ou 29");
		break;
		case 3: 
			printf("\nMarco");
			printf("\nQtd Dias: 31");
		break;
		case 4: 
			printf("\nAbril");
			printf("\nQtd Dias: 30");
		break;
		case 5:
			printf("\nMaio");
			printf("\nQtd Dias: 31");
		break;
		case 6: 
			printf("\nJunho");
			printf("\nQtd Dias: 30");
		break;
		case 7: 
			printf("\nJulho");
			printf("\nQtd Dias: 31");
		break;
		case 8: 
			printf("\nAgosto");
			printf("\nQtd Dias: 31");
		break;
		case 9:
			printf("\nSetembro");
			printf("\nQtd Dias: 30");
		break;
		case 10: 
			printf("\nOutubro");
			printf("\nQtd Dias: 31");
		break;
		case 11: 
			printf("\nNovembro");
			printf("\nQtd Dias: 30");
		break;
		case 12: 
			printf("\nDezembro");
			printf("\nQtd Dias: 31");
		break;
	}
}
