#include <stdio.h>

int main(){
	int num, soma, contador;
	
	while(contador <= 10){
		printf("Digite um numero: ");
		scanf("%d",&num);
		contador++;
		if(num < 0){
			soma = soma;
		}
		else{
			soma = soma +num;
		}
	}
	printf("\nSoma: %d", soma);
}
