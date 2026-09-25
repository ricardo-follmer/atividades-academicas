// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	//Variaveis
	float preco;
	int codigo;
	// Entrada de dados
	printf("Digite o valor do produto: ");
	scanf("%f",&preco);
	printf("Digite o código de origem: ");
	scanf("%d",&codigo);
	// Validação de códigos + Saída
	if (codigo == 1) printf("Preço é de R$ %.2f de origem do sul",preco);
	else if (codigo == 2)printf("Preço é de R$ %.2f de origem do norte",preco);
	else if (codigo == 3)printf("Preço é de R$ %.2f de origem do leste",preco);
	else if (codigo == 4)printf("Preço é de R$ %.2f de origem do oeste",preco);
	else if (codigo == 5 || codigo == 6 )printf("Preço é de R$ %.2f de origem do nordeste",preco);
	else if (codigo >=7 && codigo <=9) printf("Preço é de R$ %.2f de origem do sudeste",preco);
	else if (codigo >=10 && codigo <=20) printf("Preço é de R$ %.2f de origem do centro-oeste",preco);
	else if (codigo >=25 && codigo <=50) printf("Preço é de R$ %.2f de origem do nordeste ",preco);
}

