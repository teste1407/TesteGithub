/*
Escreva um programa que receba a idade de uma pessoa e mostre a 
mensagem de maioridade ou não. Considere 16 anos como idade mínima para a pessoa ser de maior.
--------------------------------------------------------------------------------------------
1 - entradas de dados
	idade
	
2 - saídas de dados
	maioridade sim ou nao
	
3 - processamento
	obter idade
	
	imprimir maioridade sim ou nao
	
4 - fórmula
 	 nao ha

*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	printf("Digite a sua Idade: ");
	scanf("%d",&idade);
	
	if(idade>=16){
		printf("Maioridade");
	}else{
		printf("Menor de Idade");
	}
	
	return 0;
}