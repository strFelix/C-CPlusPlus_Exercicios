#include <stdio.h>

int main(){
	float nota1, nota2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);
	
	media = (nota1 + nota2) / 2;
	
	if(media >= 6){
		printf("A media do aluno foi %.1f e o mesmo esta APROVADO!", media);
	}
	else{
		printf("A media do aluno foi - %.1f - e o mesmo esta REPROVADO!", media);
	}
}
