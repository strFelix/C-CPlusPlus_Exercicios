#include <stdio.h>
int main()
{

	char sinal;
	float valor1, valor2, resp;
	printf("Digite o sinal, pimeiro valor e o segundo valor: ");
	scanf("%c%f%f",&sinal, &valor1, &valor2);
	
	switch(sinal){
		case '+':
			resp = valor1 + valor2;
			printf("%.2f %c %.2f = %.2f",valor1, sinal, valor2, resp);
			break;
		case '-':
			resp = valor1 - valor2;
			printf("%.2f %c %.2f = %.2f",valor1, sinal, valor2, resp);
			break;
		case '*':
		case 'x':
		case 'X':
		case '.':
			resp = valor1 * valor2;
			printf("%.2f %c %.2f = %.2f",valor1, sinal, valor2, resp);
			break;
		case '/':
			if (valor2 == 0)
			    printf("Nao ha divisao por zero");
			else{
				resp = valor1 / valor2;
				printf("%.2f %c %.2f = %.2f",valor1, sinal, valor2, resp);
			}
			break;
		default:
			printf("ERRO!");
	}
}
