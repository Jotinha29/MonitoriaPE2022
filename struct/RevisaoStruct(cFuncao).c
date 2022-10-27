#include <stdio.h>

struct horario{
	int hora, min, seg;
};//struct global, para funcionar em todos as funções e na main


int main (){
	
	struct horario horaPaises[5];
	void receberHorario(struct horario h[5]);
	void printHorario(struct horario h[5]);
	//fixar a maneira de como passar como argumento uma estrutura
	receberHorario(horaPaises);
	printHorario(horaPaises);
	
	return 0;
}

void receberHorario(struct horario h[5]){
	
	int x;
	
	printf("FORMATO\n");
	printf("|hh:mm:ss|\n");
	
	for(x=0;x<3;x++){
		printf("Digite o horario do Pais %d: ", x+1);
		fflush(stdin);
		scanf ("%d:%d:%d", &h[x].hora, &h[x].min, &h[x].seg);
	}
}

void printHorario(struct horario h[5]){
	
	int x;
	
	printf("\n|hh:mm:ss|\n");
	
	for(x=0;x<5;x++){
		printf("Horario Pais %d: %d:%d:%d\n",
		x+1, h[x].hora, h[x].min, h[x].seg);
	}
}
