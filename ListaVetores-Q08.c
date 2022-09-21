#include <stdio.h>

int main (){
	
	int v[5];
	int x, total = 0, media = 0;
	
	printf ("Informe a idade desejado :");
	for (x =0; x < 5; x++){
		scanf("%d", &v[x]);
	}
	
	for (x =0; x < 5; x++){
		total+=v[x];
	}

	media = total/5;

	printf("%d", media);
	
	return 0;
}
