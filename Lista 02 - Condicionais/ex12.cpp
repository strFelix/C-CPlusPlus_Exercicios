#include <stdio.h>

int main(){
	float salario, ir;
	
	printf("Digite o salario do funcionario...: R$");
	scanf("%f",&salario);
	
	if(salario <= 1710.78){
		ir = salario * 0;
	}
	else if(salario > 1710.78 && salario <= 2563.92){
		ir = salario * 0.075 - 128.31;
	}
	else if(salario > 2563.92 && salario <= 3418.59){
		ir = salario * 0.15 - 320.60;
	}		
	else if(salario > 3418.59 && salario <= 4271.59){
		ir = salario * 0.225 - 577;
	}	
	else{
		ir = salario * 0.275 - 790.58;
	}
	printf("Imposto de renda a pagar..........: R$%5.2f", ir);
}
