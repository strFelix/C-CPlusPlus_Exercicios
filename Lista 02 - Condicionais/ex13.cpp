#include <stdio.h>

int main(){
	float salario_bruto, inss, ir, salario_liquido;
	
	printf("Digite o salario_bruto do funcionario...: R$");
	scanf("%f",&salario_bruto);
	
	
	//INSS
	if(salario_bruto <= 1247.70){
		inss = salario_bruto * 0.08;
	}
	if(salario_bruto > 1247.70 && salario_bruto <= 2079.50){
		inss = salario_bruto * 0.09;
	}
	if(salario_bruto > 2079.50 && salario_bruto <= 4159){
		inss = salario_bruto * 0.11;
	}
	if(salario_bruto > 4159){
		inss = 468;
	}
	
	//IR
	if(salario_bruto <= 1710.78){
		ir = salario_bruto * 0;
	}
	if(salario_bruto > 1710.78 && salario_bruto <= 2563.92){
		ir = salario_bruto * 0.075 - 128.31;
	}
	if(salario_bruto > 2563.92 && salario_bruto <= 3418.59){
		ir = salario_bruto * 0.15 - 320.60;
	}		
	if(salario_bruto > 3418.59 && salario_bruto <= 4271.59){
		ir = salario_bruto * 0.225 - 577;
	}	
	if(salario_bruto > 4271.59){
		ir = salario_bruto * 0.275 - 790.58;
	}
	
	salario_liquido = salario_bruto - inss - ir;
	
	printf("\nSalario bruto......: R$%9.2f", salario_bruto);
	printf("\nINSS...............: R$%9.2f", inss);
	printf("\nIR.................: R$%9.2f", ir);
	printf("\nSalario Liquido....: R$%9.2f", salario_liquido);
	
}
