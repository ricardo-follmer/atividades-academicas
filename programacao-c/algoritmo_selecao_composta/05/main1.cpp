// Algoritmo: Calculo do valor adicional do salário. 

// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	//Declaração de variaveis
	float salario,aumento;
	int classe;
	//Impressão + Entrada de dados
	printf("Classe Nível Valor adicional");
	printf("\n 1 - Excelente + 100%");
	printf("\n 2 - Bom + 80%");
	printf("\n 3 - Médio + 50%");
	printf("\n 4 - Regular + 30%");
	printf("\n 5 - Precisa treinar mais + 10%");
	printf("\n 6 - Te cuida + 5%");
	printf("\n 7 - Passe no RH + 0%");
	printf("\nInforme a classe do Jogador: ");
	scanf("%d",&classe);
	printf("\n Informe o salário: ");
	scanf("%f",&salario);
	// Processamento + saída de dados
	if (classe == 1){
		aumento=salario*2;
		printf("Salário a receber é de R$ %.2f \n Classe: Excelente",aumento);
	}
	else if (classe ==2){
		aumento=salario*1.8;
		printf("Salário a receber é de R$ %.2f\n Classe: Bom",aumento);
	}
	else if (classe ==3){
		aumento=salario*1.5;
		printf("Salário a receber é de R$ %.2f\n Classe: Médio",aumento);
	}
	else if (classe ==4){
		aumento=salario*1.3;
		printf("Salário a receber é de R$ %.2f\n Classe: Regular",aumento);
	}
	else if (classe ==5){
		aumento=salario*1.1;
		printf("Salário a receber é de R$ %.2f\n Classe: Precisa treinar mais",aumento);
	}
	
	else if (classe ==6){
		aumento=salario*1.05;
		printf("Salário a receber é de R$ %.2f\n Classe: Te cuida",aumento);
	}
	else if (classe ==7) printf("Salário a receber é de R$ %.2f \n Classe: Passe no RH ",salario);
}
