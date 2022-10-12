#include <stdio.h>

int main(){
	
	int f(int x);
	int n, r;
	
	printf ("Digite um numero: ");
	scanf  ("%d", &n);
	
	r = f(n);
	
	printf ("\nOperacao\n%d! = %d", n, r);
	
	return 0;
}
int f(int x){

	int r;
	
	if(x == 0){
		r = 1;
	} else {
		r = x *	f(x - 1);// função recursiva
	/*exemplo   
			3 * (2)função roda novamente para 
	               conseguir o valor 2
			2 * (1)roda de novo para conseguir 1
			1 * (0)x == 0, o if para de funcionar  
	*/
	}
	/*função recursiva é aquela que ela mesma se 
	chama em um ciclo*/
	return r;
}
