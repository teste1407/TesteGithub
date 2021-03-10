/*
Escreva um programa que receba dois números inteiros e mostre o menor.
------------------------------------------------------------------------
1 - entradas de dados
	n1,n2;
	
2 - saídas de dados
	menor
	
3 - processamento
	obter n1,n2
	
	imprimir menor
	
4 - fórmula
 	 nao ha

*/

#include <stdio.h>
#include <locale.h>

main()
{
	int n1,n2;
	
	printf("N1: ");
	scanf("%d",&n1);
	
	printf("N2: ");
	scanf("%d",&n2);	
	
	if(n1>n2){
		printf("Menor %d \n",n2);
	}
	else{
		printf("Menor %d\n",n1);
	}
	
	return 0;
}