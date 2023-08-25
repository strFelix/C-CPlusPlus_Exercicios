#include <stdio.h>

int main(){
	float num;
	printf("Digite um numero: ");
	scanf("%f",&num);
	
	if(num > 0){
		printf("O numero digitado e' POSITIVO!");
	}
	else{
		printf("O numero digitado e' NEGATIVO!");
	}
}
