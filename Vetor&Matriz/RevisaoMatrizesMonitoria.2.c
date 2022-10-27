#include <stdio.h>

int main(){
	
	int matriz [3][3] = {1,2,3,4,5,6,7,8,9};
	
	//usando o for para apresentar cada valor da matriz no PRINTF
	
	int x, y;
	
	for (x=0;x<3;x++){
		for (y=0;y<3;y++){
			printf("%d|", matriz[x][y]);
		}
		printf ("\n");
	}
}
