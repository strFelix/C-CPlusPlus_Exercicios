#include <stdio.h>

int main() {
	float n1, n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	
	printf("Digite o segundo numero: ");
	scanf("%f",&n2);
	
	if(n1 > n2) {
		printf("O numero %.2f e' maior que %.2f", n1, n2);
	}
	else {
		printf("O numero %.2f e' maior que %.2f", n2, n1);
	}
}
