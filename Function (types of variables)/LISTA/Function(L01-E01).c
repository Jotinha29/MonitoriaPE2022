#include <stdio.h>
#include <math.h>

int valor (int n1[], int n2);

int main (){
	
	int v[2], y = 2;
	int valor (int n1[], int n2);
	
	valor (v, y);
	
}

int valor (int n1[], int n2){
	
	int v[2], x;
	
	for(x=0; x<2; x++){
		printf("Informe o %d valore:", x+1);
		scanf ("%d", &v[x]);
	}
	
	if(v[1]>v[0]){
		printf("O MAIOR FOI 2o VALOR: %d", v[1]);
	} else {
		printf("O MAIOR FOI 1o VALOR: %d", v[0]);
	}

	
}
