#include <stdio.h>

int main(){
	int num, mult, result;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	printf("=-=-TABUADA-=-=");
	while(mult < 10){
		mult++;
		result = num * mult;
		printf("\n %2.d x %2.d = %2.d", num, mult, result);
	}
}
