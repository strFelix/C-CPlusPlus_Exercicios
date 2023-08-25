#include <stdio.h>

int main(){
	float salario, inss;
	
	printf("Digite o salario do funcionario...: R$");
	scanf("%f",&salario);
	
	if(salario <= 1247.7){
		inss = salario * 0.08;
	}
	else if(salario > 1247.7 && salario <= 2079.5){
		inss = salario * 0.09;
	}
	else if(salario > 2079.5 && salario <= 4159){
		inss = salario * 0.11;
	}
	else{
		inss = 468;
	}
	printf("O INSS fica no valor de.......: R$%5.2f", inss);

}
