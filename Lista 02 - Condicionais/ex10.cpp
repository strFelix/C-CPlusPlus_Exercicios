#include <stdio.h>

int main(){
	float n1, n2, n3, maior;
	
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("Digite o segundo numero: ");
	scanf("%f",&n2);
	printf("Digite o terceiro numero: ");
	scanf("%f",&n3);
	
	maior = n1;
	if(n2 > n1 && n2 > n3){
		maior = n2;
	}
	if(n3 > n1 && n3 > n2){
		maior = n3;
	}
	
	printf("O maior numero entre | %.1f - %.1f - %.1f | eh %.1f", n1, n2, n3, maior);
}
