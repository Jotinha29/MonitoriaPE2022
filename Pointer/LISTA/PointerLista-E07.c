/*
7) Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira. 
Use aritmética de ponteiros para acessar os caracteres das strings.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

_Bool compara(char *str1, char *str2){
	
	if (strcmp(str2, str1) == 0){
        return 1;
    } 
	else {
        return 0;
    }
}

int main (){
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	int x, tam;
	char str1[tam], str2[tam];
	char *pS1, *pS2;
	
	printf("Digite uma palavra: ");
	scanf("%s", &str1);
	printf("Digite uma palavra: ");
	scanf("%s", &str2);
	
	tam = strlen(str1);
	
	for(x=0; x<tam; x++){
		pS1 = &str1[x];
		pS2 = &str2[x];
		if(compara(pS1, pS2) == 1){
			printf("As strings são iguais.\n");
			
		} else {
			printf("As strings são diferentes.\n");
		}
	}
	
	system("pause");
	return 0;
}
