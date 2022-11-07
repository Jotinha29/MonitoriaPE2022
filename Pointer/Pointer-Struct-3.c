#include <stdio.h>

int main(){
	
	struct horario {
		int *pHora;
		int *pMin;
		int *pSeg;
	};
	
	struct horario hoje;
	
	int hora = 200, min = 300, seg = 400;
	
	//utilizando ponteiros declarados dentro de uma estrutura 
	hoje.pHora = &hora;
	hoje.pMin = &min;
	hoje.pSeg = &seg;
	
	printf("Hora - %d\n", *hoje.pHora);
	printf("Min - %d\n", *hoje.pMin);
	printf("Seg - %d\n", *hoje.pSeg);
	
	*hoje.pSeg = 1000;
	
	printf("\nSeg - %d\n", *hoje.pSeg);
	
	getchar();
	return 0;
}
