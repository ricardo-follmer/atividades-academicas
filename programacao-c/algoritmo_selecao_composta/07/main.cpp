/*
Faça um algoritmo que ao entrar com a sigla do estado, retorna uma das
mensagens:
- RS - gaúcho
- RJ - carioca
- SP - paulista
- MG - mineiro
- Outros estados
*/
// Algoritmo: 

// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	//Declaração de variaveis
	char estado[1];
	printf("Informe a sigla do estado ");
	scanf("%s",estado);
	estado[1]=toupper(estado[1]);
	switch (estado[1]){
		case 'RS': printf("Gaucho");break;
	}
return(0);
}
