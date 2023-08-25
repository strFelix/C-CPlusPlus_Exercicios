#include <stdio.h>

int main(){
	float nota1, nota2, nota3, media, menor;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);
	printf("Digite a terceira nota: ");
	scanf("%f",&nota3);
	
	// Procura a menor nota
	menor = nota1; 
	if(nota2 < menor){
		menor = nota2;
	}
	if(nota3 < menor){
		menor = nota3;
	}
	
	media = (nota1 + nota2 + nota3 - menor) / 2;
	if (media >= 6){
		printf("A media eh %.1f e a mesma foi APROVADA!", media);
	}
	else{
		printf("A media eh %.1f e a mesma foi REPROVADA!", media);
	}
}
