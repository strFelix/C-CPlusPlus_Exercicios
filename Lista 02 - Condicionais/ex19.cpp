#include <stdio.h>

int main(){
	float lado1, lado2, lado3;
	
	printf("Digite o valor do primeiro lado...: ");
	scanf("%f",&lado1);
	printf("Digite o valor do segundo lado....: ");
	scanf("%f",&lado2);
	printf("Digite o valor do terceiro lado...: ");
	scanf("%f",&lado3);
	
	if(lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2){
		printf("As medidas FORMAM um triangulo!");
	}
	else{
		printf("As medidas NAO FORMAM um triangulo!");
	}
}
