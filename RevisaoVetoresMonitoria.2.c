#include <stdio.h>

int main(){
	
	float notas[5] = {0};
	float total = 0;
	float media = 0;

	printf("Informe suas notas do Bimestre: ");
	
	int x;
	//como usar o scanf em vetores
	for (x =0; x < 5; x++){
		scanf("%f", &notas[x]);
	}
	//como utilizar o for e como manipular o vetor 
	for (x =0; x < 5; x++){
		total+= notas[x];
	}
	
	media = total/5;
	
	printf("Sua media foi = %f", media);
	
	return 0;
}
