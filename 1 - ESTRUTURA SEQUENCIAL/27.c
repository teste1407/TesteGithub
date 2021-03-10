/*
Escreva um programa para calcular e exibir o valor de uma prestação em atraso:
prestacao_atrasada <- prestacao + (prestacao*(taxa/100)*num_dias_atraso)
a) taxa é o percentual de juros por dia
b) num_dias_atraso é o número de dias em atraso
c) prestação é o valor da prestação normal.
O valor da prestação, a taxa e o número de dias em atraso devem ser fornecidos pelo usuário.
--------------------------------------------------------------------------------------------
1 - entradas de dados
	prestacao
	taxa
	num_dias_atraso
  
2 - saídas de dados
	prestacao_atrasada
  
3 - processamento
	
	obter prestacao
	obter taxa
	obter num_dias_atraso

    calcular prestacao_atrasada

    imprimir prestacao_atrasada
	  
4 - fórmula
prestacao_atrasada = prestacao + (prestacao*(taxa/100)*num_dias_atraso)

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float pt, pta,nda,taxa;
	
	printf("Qual o valor da prestação: ");
	scanf("%f",&pt);

	printf("Qual taxa percentual de juros: ");
	scanf("%f",&taxa);
	
	printf("Qual número de dias em atraso: ");
	scanf("%f",&nda);
	
	pta=(pt+(pt*(taxa/100)*nda));
	
	printf("Total da prestação: %f",pta);
	
	return 0;
}