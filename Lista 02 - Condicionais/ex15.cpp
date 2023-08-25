#include <stdio.h>

int main(){
	float n1, n2, n3;
	
	printf("Digite o primeiro numero...: ");
	scanf("%f",&n1);
	printf("Digite o segundo numero....: ");
	scanf("%f",&n2);
	printf("Digite o terceiro numero...: ");
	scanf("%f",&n3);
	
	if(n1 == n2 && n2 == n3){
		printf("Os 3 numeros sao iguais!");
	}
	// se a anterior é FALSE verifica proxima:
	else if(n1 == n2 || n2 == n3 || n3 == n1){
		printf("2 dos 3 numeros sao iguais!");
	}
	// se todas anterior é FALSE imprima:
	else{
		printf("Os 3 numeros sao diferentes!");
	}
}
	
	
