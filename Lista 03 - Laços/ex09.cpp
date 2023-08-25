#include <stdio.h>

int main(){
	int num1, num2;
	
	printf("Digite o primero numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);

	if(num1 < num2){
		while(num1 <= num2){
			printf("%d ", num1);
			num1++;
		}
	}
	else{
		while(num1 >= num2){
			printf("%d ", num1);
			num1--;
		}
	}
}
