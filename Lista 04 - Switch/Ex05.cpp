#include <stdio.h>

int main(){
	int placa, final;
	
	printf("Digite os ultimos 4 digitos da placa: ");
	scanf("%d",&placa);
	
	//a casa de unidade não é divisivel por 10 então o ultimo numero é registrado
	final = placa % 10; 
	
	switch(final){
		case 1:
		case 2:
			printf("Rodizio: Segunda-feira");
			break;
		
		case 3:
		case 4:
			printf("Rodizio: Terca-feira");
			break;
		
		case 5:
		case 6:
			printf("Rodizio: Quarta-feira");
			break;
		
		case 7:
		case 8:
			printf("Rodizio: Quinta-feira");
			break;
			
		case 9:
		case 0:
			printf("Rodizio: Sexta-feira");
			break;
	} 
}
