/*
Em uma pizzaria, cada tulipa de chopp custa R$ 0,80 e uma pizza mista grande custa R$10,0 mais
R$1,50 por tipo de cobertura pedida (queijo, presunto, banana, etc.). Uma turma vai à pizzaria e pede uma
determinada quantidade de “chopps” e uma pizza grande com uma determinada quantidade de
coberturas. Escreva um programa que calcule e exiba a conta e, sabendo quantas pessoas estão à mesa,
quanto cada um deve pagar (não esqueça os 10% do garçom).
---------------------------------------------------------------------------------------------------------
1 - entradas de dados
	chopp
	cobertura
	pizza
	pessoas
	conta
	conta por pessoa
	garcom
	
2 - saídas de dados
	conta por pessoa
	
3 - processamento
    obter quantidade de chopp
    obter quantidade de pizza
    obter quantidade de cobertura
    obter quantidade de pessoas
    
	calcular conta total
	calcular a conta por pessoa
		
	imprimir a conta por pessoa

4 - fórmulas:
	conta=chopp*0.8 + pizza*10 + cobertura*1.50
	garcom=conta*0,1
	contat=conta+garcom;
	contap=contat/pessoas
*/

#include <stdio.h>

main(){
	
	int pessoas, chopp,pizza,cobertura;
	float conta, garcom, contap, contat;
	
	printf("Quantidade de Chopp: ");
	scanf("%d",&chopp);
	
	printf("Quantidade de pizzas: ");
	scanf("%d",&pizza);
	
	printf("Quantidade de Coberturas: ");
	scanf("%d",&cobertura);
	
	printf("Dividir a conta em quantas pessoas: ");
	scanf("%d",&pessoas);
	
	conta=chopp*0.8 + pizza*10 + cobertura*1.50;
	garcom=conta*0.1;
	contat=conta+garcom;
	contap=contat/pessoas;
	
	printf("\nConta : %.2f\n",conta);
	printf("\nPorcentagem do Garcom: %.2f\n",garcom);
	printf("\nTotal: %.2f\n",contat);	
	printf("\nConta a Pagar por Pessoa: %.2f\n",contap);
	
	return 0;
}

