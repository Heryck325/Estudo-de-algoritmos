#include<stdio.h>

int main()
{
	int cont, notas[4];
	float media, soma ;
	
	soma = 0;
	for(cont = 0; cont < 4; cont++)
	{
		printf("Digite a nota do %d bimestre:", cont + 1);
		scanf("%d", &notas[cont]);
		soma = soma + notas[cont];
		
	}
	
	
	for(cont = 0; cont < 4; cont++)
	{
		printf("Nota[%d]: %d", cont + 1,notas[cont]);
	}
	
	media = soma / 4;
	printf("\nA media entre as 4 notas eh igual a %.1f", media);
	
	
	return 0;
}
