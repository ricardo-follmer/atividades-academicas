// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	// Variaveis
	float reais,conversao;
	int op;
	// Entrada de dados
	setlocale(LC_ALL,"Portuguese");
	printf("Segue abaixo a lista de opção para conversão do real ");
	printf("\n 1 - Libra Esterlina - R$ 3,80");
	printf("\n 2 - Franco Suiço - R$ 1,85");
	printf("\n 3 - Dólar americano - R$ 2,43");
	printf("\n 4 - Marco Alemão - R$ 2,31");
	printf("\n Informe qual das moedas que deseja converter: ");
	scanf("%d",&op);
	printf("\n Informe o valor que deseja converter: ");
	scanf("%f",&reais);
	if (op ==1) {
		conversao=reais*3.8;
		printf("Valor de conversão é de R$ %.2f",conversao);
	}
	else if (op ==2) {
		conversao=reais*1.85;
		printf("Valor de conversão é de R$ %.2f",conversao);
	}
	else if (op ==3) {
		conversao=reais*2.43;
		printf("Valor de conversão é de R$ %.2f",conversao);
	}
	else if (op ==4) {
	conversao=reais*2.31;
	printf("Valor de conversão é de R$ %.2f",conversao);	
	}
	else ("Valor selecionado é incorreto !");
}


