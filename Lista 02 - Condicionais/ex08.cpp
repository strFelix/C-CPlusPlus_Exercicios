#include <stdio.h>

int main(){
	float n;
	
	printf("Digite um numero: ");
	scanf("%f",&n);
	
	if(n > 0){
		printf("O numero digitado e' POSITIVO!");
	}
	else if(n == 0){
		printf("O numero digitado e' NEUTRO!");
	}
	else{
		printf("O numero digitado e' NEGATIVO!");
	}
	
}
