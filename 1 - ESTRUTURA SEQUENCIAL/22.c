/*
Escreva um programa em linguagem C para calcular a raiz quadrada de um número inteiro qualquer
fornecido pela pessoa.
--------------------------------------------------------------------------------------------
1 - entradas de dados
	n1
	
2 - saídas de dados
	raiz
	
3 - processamento
    obter a n1

	calcular a raiz
		
	imprimir a raiz

4 - fórmulas:
	pow(n1,0.5)

*/

#include <stdio.h>
#include <math.h>

 main()
{
	int n1,raiz;

	printf("Digite um numero: ");
	scanf("%d",&n1);
	
	raiz=pow(n1,0.5);

	
	printf("Raiz: %d",raiz);
	
	return 0;
}