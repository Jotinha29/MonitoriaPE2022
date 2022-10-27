/*algoritmo que leia 80 notas variando de 0 a 10
dos alunos de uma turma (vários alunos). 
Calcule a frequência de cada nota
apresente uma tabela contendo os valores das notas
suas respectivas frequências
*/

#include <stdio.h>

int main(){
	
	int nota[10], x, y=1;
	int frequencia[11]={0,0,0,0,0,0,0,0,0,0,0};
;	
	printf ("..RESGISTRO NOTAS ALUNOS..\n");
	printf (".digite a nota de 0 a 10.");
	
	for (x = 0; x < 10; x++){
		printf ("\nInforme a nota do aluno %d: ", x+1);
		scanf  ("%d", &nota[x]);
		if (nota[x] > 10 || nota[x] < 0){
			printf ("\nERRO: a nota do aluno %d e' superior a 10 ou inferior a 0.\n", y++);
		} 
		if (nota[x] == 0){
			frequencia[0]++;
		} else if (nota[x] == 1){
			frequencia[1]++;
		} else if (nota[x] == 1){
			frequencia[1]++;
		} else if (nota[x] == 2){
			frequencia[2]++;
		} else if (nota[x] == 3){
			frequencia[3]++;
		} else if (nota[x] == 4){
			frequencia[4]++;
		} else if (nota[x] == 5){
			frequencia[5]++;
		} else if (nota[x] == 6){
			frequencia[6]++;
		} else if (nota[x] == 7){
			frequencia[7]++;
		} else if (nota[x] == 8){
			frequencia[8]++;
		} else if (nota[x] == 9){
			frequencia[9]++;
		}else if (nota[x] == 10){
			frequencia[10]++;
		}
	}

	printf ("\n\t...Tabela Notas...\n");
	printf ("\tNOTA 00: %d\n", frequencia[0]);	
	printf ("\tNOTA 01: %d\n", frequencia[1]);
	printf ("\tNOTA 02: %d\n", frequencia[2]);
	printf ("\tNOTA 03: %d\n", frequencia[3]);
	printf ("\tNOTA 04: %d\n", frequencia[4]);
	printf ("\tNOTA 05: %d\n", frequencia[5]);
	printf ("\tNOTA 06: %d\n", frequencia[6]);
	printf ("\tNOTA 07: %d\n", frequencia[7]);
	printf ("\tNOTA 08: %d\n", frequencia[8]);
	printf ("\tNOTA 09: %d\n", frequencia[9]);
	printf ("\tNOTA 10: %d\n", frequencia[10]);
	return 0;
}
