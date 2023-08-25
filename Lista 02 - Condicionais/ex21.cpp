#include <stdio.h>

int main(){
	int ano;
	
	printf("Digite o ano a ser analisado...: ");
	scanf("%d",&ano);
	
	/*
	- São bissextos todos os anos múltiplos de 400, p.ex.: 1600, 2000, 2400, 2800...
	- São bissextos todos os múltiplos de 4, exceto se for múltiplo de 100 mas não de 400, p.ex.: 1996, 2000, 2004, 2008...
	- Não são bissextos anos ímpares e anos pares não-múltiplos de 4.
	*/
	
	if(ano % 2 == 0 && ano % 4 == 0){
		printf("O ano de %d e' bissexto!'", ano);
	}
	else{
		printf("O ano de %d NAO e' bissexto!", ano);
	}
	
	/*
	if(ano % 400 == 0){
			printf("O ano de %d e' bissexto!'", ano);
		}
	else if(ano % 4 == 0){
		if(ano % 100 != 0){
			printf("O ano de %d e' bissexto!'", ano);
		}
		else{
			printf("O ano de %d NAO e' bissexto!", ano);
		}
	}
	else{
		printf("O ano de %d NAO e' bissexto!", ano);
	}
	*/
	
}
