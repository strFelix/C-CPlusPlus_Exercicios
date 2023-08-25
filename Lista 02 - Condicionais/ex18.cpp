#include <stdio.h>

int main(){
	float n1, n2, n3;
	
	printf("Digite o primeiro numero...: ");
	scanf("%f",&n1);
	printf("Digite o segundo numero....: ");
	scanf("%f",&n2);
	printf("Digite o terceiro numero...: ");
	scanf("%f",&n3);
	
	if(n1 != n2 && n2 != n3 && n3 != n1){
		if(n1 > n2 && n1 < n3 || n1 > n3 && n1 < n2){
			printf("Numero intermediario.......: %.2f", n1);
		}
		else if(n2 > n1 && n2 < n3 || n2 > n3 && n2 < n1){
			printf("Numero intermediario.......: %.2f", n2);
		}
		else{
			printf("Numero intermediario.......: %.2f", n3);
		}
	}
	else{
		printf("Existe numeros iguais entre os digitados!");
	}
	
}
