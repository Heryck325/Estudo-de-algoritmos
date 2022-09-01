/*
1. Escrever um programa que lê 5 valores para a, um de cada vez, 
e conta quantos destes valores são negativos, escrevendo esta informação. 
*/

#include<stdio.h>

int main()
{
	int qtd_negativo, a, cont;
	qtd_negativo = 0;
	
	for(cont = 0; cont < 5; cont++)
	{
		printf("Digite em a:");
		scanf("%d", &a);
		
		if(a < 0){
			qtd_negativo = qtd_negativo + 1;
		}
	}
	
	printf("\n\nA quantidade de numeros negativos eh igual a  %d", qtd_negativo);
	
	
	
	
	return 0;
}
