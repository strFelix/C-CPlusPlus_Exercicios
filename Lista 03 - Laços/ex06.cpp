#include <stdio.h>

int main(){
	int num1, num2, cont;
	
	printf("Digite o primero numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	
	cont = num1 + 1;
	
	while(num2 > cont){
		printf("%d ", cont);
		cont++;
	}
}
