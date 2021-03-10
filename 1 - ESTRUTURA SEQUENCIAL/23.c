/*
Escreva um programa em linguagem C para calcular a operação de um número elevado a outro
(potência). A pessoa deve informar a base e o expoente que deverão ser números inteiros
-----------------------------------------------------------------------------------------
1 - entradas de dados
	n1
	pot
	
2 - saídas de dados
	resultado
	
3 - processamento
    obter a n1
    obter a potencia

	calcular o resultado
		
	imprimir o resultado

4 - fórmulas:
	pow(n1,pot)

*/
#include <stdio.h>
#include <math.h>

 main()
{
	int n1,pot,resultado;

	printf("Digite um numero: ");
	scanf("%d",&n1);
	printf("Digite uma potencia: ");
	scanf("%d",&pot);
	
	resultado=pow(n1,pot);

	
	printf("Resultado: %d",resultado);
	
	return 0;
}