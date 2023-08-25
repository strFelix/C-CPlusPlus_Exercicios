#include <stdio.h>

int main(){
	int num, contador, par = 0;
	
	while(contador < 10){
		printf("Digite um numero: ");
		scanf("%d",& num);
		contador++;
		if(num % 2 == 0){
			par++;
		}
	}
	printf("\nQuantidade de numeros pares: %d", par);
}

