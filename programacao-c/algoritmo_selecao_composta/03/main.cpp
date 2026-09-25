// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	// Variaveis
	int codigo,quantidade;
	float valor;
	// Entrada de dados
	setlocale(LC_ALL,"Portuguese");
	printf("Tabela de produtos");
	printf("\n Código: 1001 - Valor R$ 5,32");
	printf("\n Código: 1324 - Valor R$ 6,45");
	printf("\n Código: 6548 - Valor R$ 2,37");
	printf("\n Código: 0987 - Valor R$ 5,32");
	printf("\n Código: 7623 - Valor R$ 6,45");
	printf("\n Digite a quantidade de produtos: ");
	scanf("%d",&quantidade);
	printf("\n Digite o código do produto: ");
	scanf("%d",&codigo);
	// Processamento
	if (codigo == 1001){
		valor=5.32*quantidade;
		printf("Valor total do produto selecionado é de R$ %.2f ",valor);
	}
	else if (codigo == 1324){
		valor=6.45*quantidade;
		printf("Valor total do produto selecionado é de R$ %.2f ",valor);
	}
	else if (codigo == 6548){
		valor=2.37*quantidade;
		printf("Valor total do produto selecionado é de R$ %.2f ",valor);
	}
	else if (codigo == 987){
		valor=5.32*quantidade;
		printf("Valor total do produto selecionado é de R$ %.2f ",valor);
	}
	else if (codigo == 7623){
		valor=6.45*quantidade;
		printf("Valor total do produto selecionado é de R$ %.2f ",valor);
	}
	else printf("Código informado incorreto");
}
