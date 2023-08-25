#include <stdio.h>

int main(){
	int  num, num_maior, contador;
	
	while(contador <= 10){
		printf("Digite um numero: ");
		scanf("%d",&num);
		if(num > num_maior){
			num_maior = num;
		}
		contador++;
	}
	printf("Numero maior: %d", num_maior);
}
