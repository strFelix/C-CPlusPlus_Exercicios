#include <stdio.h>

int main(){
	float n1, n2, n3, menor, maior, meio;
	
	printf("Digite o primeiro numero...: ");
	scanf("%f",&n1);
	printf("Digite o segundo numero...: ");
	scanf("%f",&n2);
	printf("Digite o terceiro numero...: ");
	scanf("%f",&n3);
	
	// Verifica menor
	menor = n1;
	if(n2 < n1 && n2 < n3){
		menor = n2;
	}
	if(n3 < n2 && n3 < n1){
		menor = n3;
	}
	
	// Verifica maior
	maior = n1;
	if(n2 > n1 && n2 > n3){
		maior = n2;
	}
	if(n3 > n2 && n3 > n1){
		maior = n3;
	}
	
	// Verifica meio
	meio = n1;
	if(n2 != menor && n2 != maior){
		meio = n2;
	}
	if(n3 != menor && n3 != maior){
		meio = n3;
	}
	
	printf("\nMenor...: %.2f", menor);
	printf("\nMeio....: %.2f", meio);
	printf("\nMaior...: %.2f", maior);	
}
