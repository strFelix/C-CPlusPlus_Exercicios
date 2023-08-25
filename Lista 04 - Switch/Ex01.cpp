#include <stdio.h>

int main(){
	int num;
		
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	switch(num){
		case 1:
			printf("Mes: Janeiro");
			break;
		
		case 2:
			printf("Mes: Fevereiro");
			break;
		
		case 3:
			printf("Mes: Marco");
			break;
		
		case 4:
			printf("Mes: Abril");
			break;
		
		case 5:
			printf("Mes: Maio");
			break;
		
		case 6:
			printf("Mes: Junho");
			break;
		
		case 7:
			printf("Mes: Julho");
			break;
			
		case 8:
			printf("Mes: Agosto");
			break;
		
		case 9:
			printf("Mes: Setembro");
			break;
			
		case 10:
			printf("Mes: Outubro");
			break;
			
		case 11:
			printf("Mes: Novembro");
			break;
			
		case 12:
			printf("Mes: Dezembro");
			break;
		
		default:
			printf("Mes inexistente.");
	}
}
