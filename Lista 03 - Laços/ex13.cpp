#include <stdio.h>

int main(){
	int num, soma;
	
	do{
		printf("Digite um numero: ");
		scanf("%d",&num);
		
		if(num > 35 && num < 55){
			soma = soma + num;
		}
	}while(num != 0);
	
	printf("\nSoma: %d", soma);
}
