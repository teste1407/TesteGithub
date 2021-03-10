/*
Escreva um programa que receba a idade e o peso de uma pessoa. 
De acordo com a tabela a seguir, verifique e mostre em qual grupo 
de risco essa pessoa se encaixa.

idade<20 

peso<60                 --- 9
(peso>=60)&&(peso<=90)  --- 8
peso>90                 --- 7

(idade>=20) && (idade<=50) 

peso<60                 --- 6
(peso>=60)&&(peso<=90)  --- 5
peso>90                 --- 4

idade>90 

peso<60                 --- 3
(peso>=60)&&(peso<=90)  --- 2
peso>90                 --- 1
--------------------------------------------------------------------------------
1 - entradas de dados
	idade
	peso
	
2 - saídas de dados
	risco
	
3 - processamento
	obter idade
	obter peso
	
	imprimir risco
	
4 - fórmula
 	   nao ha

*/
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float peso;
	int idade;

	printf("Digite sua idade: ");
	scanf("%d",&idade);	
		
	printf("Digite seu peso: ");
	scanf("%f",&peso);	
	
	if(idade<20){
		if(peso<60){
			printf("Grupo de risco: 9");
		}else if((peso>=60)&&(peso<=90)){
			printf("Grupo de risco: 8");			
		}else if(peso>90){
			printf("Grupo de risco: 7");			
		}
	}else if((idade>=20) && (idade<=50)){
		if(peso<60){
			printf("Grupo de risco: 6");
		}else if((peso>=60)&&(peso<=90)){
			printf("Grupo de risco: 5");			
		}else if(peso>90){
			printf("Grupo de risco: 4");			
		}	
	}else{
		if(peso<60){
			printf("Grupo de risco: 3");
		}else if((peso>=60)&&(peso<=90)){
			printf("Grupo de risco: 2");			
		}else if(peso>90){
			printf("Grupo de risco: 1");			
		}		
	}
	
	return 0;
}













