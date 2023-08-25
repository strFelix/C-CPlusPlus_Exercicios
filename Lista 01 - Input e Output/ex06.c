#include <stdio.h>

int main(){
    int preco, quant, anos, mult, anoemdias;

    printf("Digite o valor do maco:");
    scanf("%d",&preco);

    printf("Digite a quantidade de macos por dia:");
    scanf("%d",&quant);

    printf("Ha quantos anos essa pessoa fuma:");
    scanf("%d",&anos);

    anoemdias = 365;
    mult = (anos * anoemdias) * preco * quant;

    printf("O valor total gasto foi de: %d"), mult;
}