#include<stdio.h>

int main(){
	int idade;
	
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	
	if(idade >= 18){	
		printf("Voce e' MAIOR de idade!");
	}
	else{
		printf("Voce e' MENOR de idade!");
	}
}
