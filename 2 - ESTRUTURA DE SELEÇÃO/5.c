/*
Obter um nº qualquer e informar se este nº é par, ímpar, positivo ou negativo.
------------------------------------------------------------------------------
1 - entradas de dados
	n
	
2 - saídas de dados
	par, ímpar, positivo ou negativo.
	
3 - processamento
	Verificar se é par ou impar
	Verficar se é maior ou menor que 0
	
	imprimir par, ímpar, positivo ou negativo.
	
4 - fórmula
 	 não há

*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	printf("Digite um numero inteiro: ");
	scanf("%d",&n);
	
	
	if((n%2)==0){
		
		printf("\nPar\n");
		
	}
	else{
		printf("\nImpar\n");
	}
	if(n>=0){
		printf("\nPositivo \n");
	}
	else{
		printf("\nNegativo \n");
	}
	
	return 0;
}