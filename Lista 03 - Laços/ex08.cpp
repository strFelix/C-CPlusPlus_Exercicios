#include <stdio.h>

int main(){
	int num, mult, result, cont;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	printf("Digite o limite: ");
	scanf("%d",&cont);
	
	printf("=-=-TABUADA-=-=");
	while(mult < cont){
		mult++;
		result = num * mult;
		printf("\n %2.d x %2.d = %2.d", num, mult, result);
	}
}
