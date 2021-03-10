/*
Escreva um programa em linguagem C que declare 3 variáveis (dos tipos int, float e char).
Depois coloque um valor em cada uma delas e exiba o seu conteúdo na tela
-----------------------------------------------------------------------------------------
1 - entradas de dados
	letra
	numero inteiro
	numero real
	
2 - saídas de dados
	letra
	numero inteiro
	numero real
	
3 - processamento
	obter letra
	obter numero inteiro
	obter numero real
	
	imprimir letra
	imprimir numero inteiro
	imprimir numero real	
4 - fórmula
	não há  
*/

#include <stdio.h>

main(){

int n1;
float n2;
char letra[2];

printf("Digite um numero inteiro:  ");
scanf("%d",&n1);

printf("Digite um numero real:  ");
scanf("%f",&n2);

printf("Digite uma letra:  ");
scanf("%s",&letra);

printf("Numero inteiro: %d \n",n1);
printf("Numero real: %f \n",n2);
printf("Palavra: %s \n",letra);
return 0;
}