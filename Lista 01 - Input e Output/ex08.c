#include <stdio.h>

int main(){
    int n, divisao_mult;
    printf("Digite um numero: ");
    scanf("%d",&n);

    divisao_mult = ((n / 5) + 1) * 5;

    printf("O proximo multiplo de 5 eh: %d", divisao_mult);
}