#include<stdio.h>

int main(){
	
	float x(float n1, float n2);
	float a, b, soma;
	int i;
	
	printf ("Digite 2 numeros: ");
	scanf  ("%f", &a);
	scanf  ("%f", &b);
	
	soma = x(a, b);
	
	printf (" Resultado da soma em modulo igual a %.2f\n", soma);
	
	
	return 0;
}
float x(float n1, float n2){
	
	float R(float R1);
	
	if(n1<0){
		n1 = R(n1);
	} else if (n2<0){
		n2 = R(n2);
	} 
	
	return n1 + n2;
}

float R(float R1){
	
	return R1*-1;
}
