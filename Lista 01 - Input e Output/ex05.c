#include <stdio.h>

int main(){
    int km, l, divisao;
    printf("Digite a quilometragem:");
    scanf("%d",&km);

    printf("Digite a quantidade de litros gastos: ");
    scanf("%d",&l);

    divisao = km / l;

    printf("A quantidade de Km/L eh: %d Km/L", divisao);

}