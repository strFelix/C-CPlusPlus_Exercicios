#include <stdio.h>

int main(){
	float voto, hugo, ze, luiz, total;
	float  porcentagem_hugo, porcentagem_ze, porcentagem_luiz;
	
	printf("1 - Huguinho | 2 - Zezinho | 3- Luizinho | 0- Fim da eleicao \n");
	
	do{
		printf("Digite o seu voto: ");
		scanf("%f",&voto);
		
		if(voto == 1){
			hugo++;
		}
		if(voto == 2){
			ze++;
		}
		if(voto == 3){
			luiz++;
		}
	}while(voto != 0);
	
	total = hugo + ze + luiz;
	
	porcentagem_hugo = (hugo * 100)/total;
	porcentagem_ze = (ze * 100)/total;
	porcentagem_luiz = (luiz * 100)/total;
	
	
	printf("\n-=-FIM DA ELEICAO-=-\n");
	printf("\n--- Huguinho --- \nVotos: %.0f  \nPorcentagem: %.2f%% \n", hugo, porcentagem_hugo);
	printf("\n--- Zezinho ---- \nVotos: %.0f  \nPorcentagem: %.2f%% \n", ze, porcentagem_ze);
	printf("\n--- Luizinho --- \nVotos: %.0f \nPorcentagem: %.2f%% \n", luiz, porcentagem_luiz);
}
