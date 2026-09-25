// Algoritmo: Aumento referente cargo

// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	//Declaração de variaveis
	float salario,aumento,diferenca;
	int cargo;
	printf("Segue abaixo a tabela de aumento referente ao cargo \n");
	printf("\n 1-Gerente 10%");
	printf("\n 2-Engenheiro 20%");
	printf("\n 3-Técnico 30%");
	printf("\nInforme a opção desejada : ");
	scanf("%d",&cargo);
	printf("Informe seu salário atual: ");
	scanf("%f",&salario);
	// Processamento
	if (cargo==1){
		aumento=salario*1.10;
		diferenca=aumento-salario;
		printf("\nSalario Anterior R$ %.2f \n Salário Atual R$ %.2f \n Aumento foi de R$ %.2f",salario,aumento,diferenca);
	}
	else if (cargo==2){
		aumento=salario*1.20;
		diferenca=aumento-salario;
		printf("\nSalario Anterior R$ %.2f \n Salário Atual R$ %.2f \n Aumento foi de R$ %.2f",salario,aumento,diferenca);
	}
	else if (cargo==3){
		aumento=salario*1.30;
		diferenca=aumento-salario;
		printf("\nSalario Anterior R$ %.2f \n Salário Atual R$ %.2f \n Aumento foi de R$ %.2f",salario,aumento,diferenca);
	}
	else {
		aumento=salario*1.40;
		diferenca=aumento-salario;
		printf("\nSalario Anterior R$ %.2f \n Salário Atual R$ %.2f \n Aumento foi de R$ %.2f",salario,aumento,diferenca);
	}
}
