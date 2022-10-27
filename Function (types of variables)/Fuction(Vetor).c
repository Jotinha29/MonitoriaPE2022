#include <stdio.h>

int main(){
	
	int v[10] = {6, 4, 1, 9, 0, 8, 5, 2, 7, 3};
	int x;
	//nao é necessario na function colocar o tamanho do vetor
	void ordemCresce(int v[], int n);
	/*pode passar somente o nome do vetor e o 10 indica
	o int, que é igual ao tamanho do vetor*/ 
	ordemCresce(v, 10);
	
	for(x=0; x<10; x++){
		printf ("|%i", v[x]);
	}
	
	return 0; 
}

void ordemCresce(int v[], int n){
	/*nao é um algoritmo para enficiencia, funciona, 
	mas eu estou utilizando para explicação*/
	int x, y, temp;
	
	for (x=0; x<n; x++){
		for(y=x+1; y<n; y++){
			if (v[x]>v[y]){
				temp = v[x];
				v[x] = v[y];
				v[y] = temp;
			}
		}
	}
	
	
}
