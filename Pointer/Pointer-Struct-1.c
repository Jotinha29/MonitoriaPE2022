#include <stdio.h>

int main(){
	
	struct horario {
		int hora, min, seg;
	};
	
	struct horario agr, *dps;
	dps = &agr;
	// () para dar prioriada, pois na linguagem C o "." vem prim
	(*dps).hora = 20;
	(*dps).min = 30;
	// OU ->, serve para o mesmo proposito 
	dps->seg = 50;
	
	printf("%d:%d:%d", agr.hora, agr.min, agr.seg);
	
	getchar();
	return 0;
}
