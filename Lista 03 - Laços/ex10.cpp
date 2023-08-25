#include <stdio.h>

int main(){
	float num, soma;
	
	do{ //repita isso enquanto verdade
		printf("Digite um numero: ");
		scanf("%f",&num);
		if(num >= 0){
			soma = soma + num;
		}
	}while(num >= 0); //enquanto verdade repita
	printf("\nSoma: %.2f", soma);
}
