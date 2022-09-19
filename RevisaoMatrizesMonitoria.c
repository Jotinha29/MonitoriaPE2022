#include <stdio.h>

int main(){
	//o valor da primeira [] são para linhas, já a segunda para colunas 
	//int matriz[3][3] = {{1, 2, 3}
	//					 {4, 5, 6}
	//				 	 {7, 8, 9}};
	//jeito didatico para a explicação a baixo					
	//{primeira coluna, segunda coluna, terceira coluna}primeira linha
	//{primeira coluna, segunda coluna, terceira coluna}segunda linha
	//{primeira coluna, segunda coluna, terceira coluna}terceira linha
	//jeito convencional {1,2,3,4,5,6,7,8,9}, o compilador entende que 
	//apos o terceiro digito informado a primeira linha ja obteve seu 
	//maximo e parte para a segunda linha
	int matriz[3][3] = {1,2,3,4,5,6,7,8,9};
	
	printf("%d", matriz[2][0]);
	
	//pensar como um jogo de batalha naval onde há o A1, B1, ... logo 
	//e lembrar que dos vetores o compilador sempre usa onde há 3 espaços, ele 
	//lê como 0, 1, 2. entao coluna 2 = B e 0 = 1, logo B1([2][0]) será o valor 7
	
	return 0;
}
