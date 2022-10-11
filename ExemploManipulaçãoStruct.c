#include <stdio.h>

int main (){

	struct horario{
	int horas;
	int minutos;
	int segundos;
	};
	
	struct horario agora;
	agora.horas = 15;
	agora.minutos = 17;
	agora.segundos = 30; 
	
	struct horario depois;
	depois.horas = (agora.horas + 12)-24;
	depois.minutos = agora.minutos;
	depois.segundos = agora.segundos;
	
	printf("\t|----HORARIO BRASIL----|");
	printf ("\n\t|....%d:%d:%d..........|\n", agora.horas, agora.minutos, agora.segundos);
	printf("\t|----HORARIO JAPAO-----|");
	printf ("\n\t|....%d:%d:%d...........|\n", depois.horas, depois.minutos, depois.segundos);
	return 0;
}
