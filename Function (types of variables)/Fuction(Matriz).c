#include <stdio.h>

int main (){
	
	void functionPrint(int m[3][3]);
	int m[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	/*quando for chamar, nao é necessário colocar o tamanho
	somente o nome*/
	functionPrint(m);
	
	return 0;
}
/*diferente do vetor, aqui temos que informar o tamanho da 
matriz
OBS.: o primeiro valor nao é obrigatorio, so o segundo
*/
void functionPrint(int m[][3]){
	
	int x, y;
	
	for(x=0; x<3; x++){
		for(y=0; y<3; y++){
			printf("|%d", m[x][y]);
		}
		printf("|");
		printf("\n");
	}
}
