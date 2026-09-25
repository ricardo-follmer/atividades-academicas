// Algoritmo: 

/*
Classe Nível Valor adicional
1 excelente + 100%
2 bom + 80%
3 médio + 50%
4 regular + 30%
5 precisa treinar mais + 10%
6 te cuida + 5%
7 passe no Dep. Pessoal + 0%

Entrada: salario,codigo
Processamento: aumento=salario*n
Saída: salario_final,classe

*/
// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	//Declaração de variaveis
	float salario,aumento;
	int classe;
	printf("Classe Nível Valor adicional");
	printf("\n 1 - Excelente + 100%");
	printf("\n 2 - Bom + 80%");
	printf("\n 3 - Médio + 50%");
	printf("\n 4 - Regular + 30%");
	printf("\n 5 - Precisa treinar mais + 10%");
	printf("\n 6 - Te cuida + 5%");
	printf("\n 7 - Passe no RH + 0%");
	printf("Informe a classe do Jogador: \n");
	scanf("%d",&classe);
	printf("Informe o salário: ");
	scanf("%f",&salario);
	if (classe == 1){
		aumento=salario*2;
		printf("Salário a receber é de R$ %.2f");
	}
	
}
