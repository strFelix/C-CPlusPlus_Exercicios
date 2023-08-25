#include <stdio.h>

int main(){
	float nota_prova, n1, n2;
	int at1, at2, at3, at4;
	
	//Notas
	printf("Digite a primeira nota da prova..........: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota da prova...........: ");
	scanf("%f",&n2);
	
	//Atividades
	printf("Digite os pontos da primeira atividade...: ");
	scanf("%d",&at1);
	printf("Digite os pontos da segunda atividade....: ");
	scanf("%d",&at2);
	printf("Digite os pontos da terceira atividade...: ");
	scanf("%d",&at3);
	printf("Digite os pontos da quarta atividade.....: ");
	scanf("%d",&at4);
	
	// Calcula media, transforma em 60% e soma com as atividades
	nota_prova = (n1 + n2) / 2 * 0.6 + at1 + at2 + at3 + at4;
	
	//Verifica nota e imprime resultado
	if(nota_prova < 6){
		printf("AV1 = %.1f, o aluno esta abaixo da media!", nota_prova);
	}
	else if(nota_prova == 6){
		printf("AV1 = %.1f, o aluno esta na media!", nota_prova);
	}
	else{
		printf("AV1 = %.1f, o aluno esta acima da media!", nota_prova);
	}
}
