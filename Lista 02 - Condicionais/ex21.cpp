#include <stdio.h>

int main(){
	int ano;
	
	printf("Digite o ano a ser analisado...: ");
	scanf("%d",&ano);
	
	/*
	- S�o bissextos todos os anos m�ltiplos de 400, p.ex.: 1600, 2000, 2400, 2800...
	- S�o bissextos todos os m�ltiplos de 4, exceto se for m�ltiplo de 100 mas n�o de 400, p.ex.: 1996, 2000, 2004, 2008...
	- N�o s�o bissextos anos �mpares e anos pares n�o-m�ltiplos de 4.
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
