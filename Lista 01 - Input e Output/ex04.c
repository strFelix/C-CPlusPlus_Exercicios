#include <stdio.h>

int main(){
    int n, cubo;
    printf("Digite um numero:");
    scanf("%d",&n);
    cubo = n * n * n;
    printf("O cubo do numero %d eh %d", n, cubo);
}