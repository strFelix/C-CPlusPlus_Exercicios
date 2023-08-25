#include <stdio.h>

int main(){
	int num, cont = 1;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	while(cont <= num){
		printf("\n %d - Teste", cont);
		cont++;
	}
}
