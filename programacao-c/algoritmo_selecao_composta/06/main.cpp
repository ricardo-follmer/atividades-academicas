// Algoritmo: Desconto 30% clientes que tenham as iniciais do nome em A,D,M,S. 

// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	//Declaração de variaveis
	char nome[20];
	float valor,desconto;
	// Entrada de dados
	printf("Informe o nome do cliente: ");
	scanf(" %s",&nome);
	printf("\n Informe o valor da conta:");
	scanf("%f",&valor);
	nome[0]=toupper(nome[0]);
	switch(nome[0]){
		case 'A':{
			desconto=valor*0.7;
			printf("Parabéns recebeu desconto ! O valor que será pago é de %.2f ",desconto);
			break;
		}
		case 'D':{
			desconto=valor*0.7;
			printf("Parabéns recebeu desconto ! O valor que será pago é de %.2f ",desconto);
			break;
		}
		case 'M':{
			desconto=valor*0.7;
			printf("Parabéns recebeu desconto ! O valor que será pago é de %.2f ",desconto);
			break;
		}
		case 'S':{
			desconto=valor*0.7;
			printf("Parabéns recebeu desconto ! O valor que será pago é de %.2f ",desconto);
			break;
		}
		default: printf("Que pena. Nesta semana o desconto não é para seu nome, mas continue nos prestigiando que sua vez chegará");
	}
}
