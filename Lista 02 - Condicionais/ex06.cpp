#include <stdio.h>

int main(){
	float nota;
	
	printf("Digite uma nota: ");
	scanf("%f",&nota);
	
	if(nota >= 0 && nota <= 10){
		printf("A nota %.1f e' VALIDA!", nota);
	}
	else{
		printf("A nota %.1f e' INVALIDA!", nota);
	}
}
