/*
Escreva um programa que leia dois números. 
Caso a soma dos dois números apresente um número par e seja maior que 100 
mostre a metade da soma na tela, se a soma for um número par menor que 100, 
mostre a soma multiplicada por 2. Se a soma resultar em um número ímpar apenas apresente a soma.
-------------------------------------------------------------------------------------------------
1 - entradas de dados
	n1,n2,soma
	
2 - saídas de dados
	resultado
	
3 - processamento
	Verificar se é 	maior,menor,igual
	
	imprimir maior,menor,igual
	
4 - fórmula
 	 Soma=(n1+n2);

*/
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int soma,n1,n2,resultado;
	
	printf("Digite N1: ");
	scanf("%d",&n1);
	
	printf("Digite N2: ");
	scanf("%d",&n2);
	
	soma=(n1+n2);
	
	if(((soma%2)==0)&&(soma>100)){
	resultado=(soma/2);
	printf("Resultado: %d",resultado);	
	return 0;
	}
	if(((soma%2)==0)&&(soma<100)){
	resultado=(soma*2);
	printf("Resultado: %d",resultado);	
	return 0;
	}
	if(((soma%2)!=0)){
	printf("Soma é Impar, Soma: %d",soma);
	return 0;
	}
}