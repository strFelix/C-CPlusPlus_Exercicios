#include <stdio.h>

int main(){
	float salario, sexo, convenio;
	int idade;
	
	// Alguns valores está errado nos exemplos
	
	printf("Digite o seu salario..........................: R$");
	scanf("%f",&salario);
	printf("Digite o seu sexo 1-Masculino|2-Feminino......: ");
	scanf("%f",&sexo);
	printf("Digite a sua idade............................: ");
	scanf("%d",&idade);
	
	// Menos de 20 anos
	if(idade <= 20 && sexo == 1){
		convenio = salario * 0.0534;
	}
	else if(idade <= 20 && sexo == 2){
		convenio = salario * 0.0356;
	}
	
	// De 20-40 anos 
	if(idade > 20 && idade <= 40 && sexo == 1){
		convenio = salario * 0.0844;
	}
	else if(idade > 20 && idade <= 40 && sexo == 2){
		convenio = salario * 0.0643;
	}
		
	// Mais de 40 anos
	if(idade > 40 && sexo == 1){
		convenio = salario * 0.1012;
	}
	else if(idade > 40 && sexo == 2){
		convenio = salario * 0.0802;
	}
		
	printf("Valor do convenio.............................: R$%5.2f", convenio);
}
