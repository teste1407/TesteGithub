/*
Escreva um programa em linguagem C que pergunte para a pessoa informar dois números inteiros e
depois forneça o resultado da divisão e o seu resto.
----------------------------------------------------------------------------------------------
1 - entradas de dados
	n1
	n2
	
2 - saídas de dados
	resto
	divisão
	
3 - processamento
    obter a n1
	obter a n2

	calcular a divisão
	calcular o resto	
		
	imprimir a divisão
	imprimir o resto	
	
4 - fórmulas:
	n1/n2
	n1%n2	
*/
#include <stdio.h>

 main()
{
	int n1,n2, div, rest;

	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	
	printf("\nDigite o segundo numero: ");
	scanf("%d",&n2);
	
	div=n1/n2;
	rest=n1%n2;
	
	printf("Divisao: %d, Resto: %d",div,rest);
	
	return 0;
}