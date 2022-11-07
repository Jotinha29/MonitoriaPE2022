#include <stdio.h>

int main(){
	
	struct horario {
		int hora, min, seg;
	};
	
	struct horario agr, *dps;
	dps = &agr;

	dps->hora = 20;
	dps->min = 30;
	dps->seg = 50;
	
	int somatorio = 100;
	
	struct horario antes;
	
	antes.hora = somatorio / dps->seg;
	antes.min = agr.hora + dps->min;
	antes.seg = dps->min * dps->seg;
	
	printf("%d:%d:%d", antes.hora, antes.min, antes.seg);
	
	getchar();
	return 0;
}
