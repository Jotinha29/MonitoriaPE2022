#include <stdio.h>

int main (){
	
	float F;
	float conversao(float x);
	
	printf("Informe a temperatura em F: ");
	scanf ("%f", &F);
	
	conversao(F);
	
}

float conversao (float F){
	
	float C;
	
	C = (F-32)/1.8;
	
	printf ("temperatura em celcius : %.2f", C);
}
