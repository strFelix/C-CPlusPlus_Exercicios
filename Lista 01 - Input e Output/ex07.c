#include <stdio.h>

int main(){
    int quantia, cedula50, cedula20, cedula10;

    printf("Digite a quantia para saque: ");
    scanf("%d",&quantia);

    cedula10 = 0;
    cedula20 = 0;
    cedula50 = 0;

    cedula50 = quantia / 50;
    quantia = quantia - (cedula50 * 50);

    cedula20 = quantia / 20;
    quantia = quantia - (cedula20 * 20);

    cedula10 = quantia / 10;

    printf_s("Cedulas de 50: %d || ", cedula50);
    printf_s("Cedulas de 20: %d || ", cedula20);
    printf_s("Cedulas de 10: %d ||", cedula10);


}