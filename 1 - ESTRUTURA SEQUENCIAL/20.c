/*
Escreva um programa em linguagem C que pergunte para a pessoa informar dois números reais e
depois forneça o resultado da soma, subtração, multiplicação e divisão entre os números informados.
Mostre o resultado na tela de forma clara usando a formatação correta do comando printf.
---------------------------------------------------------------------------------------------------
1 - entradas de dados
   n1
   n2
2 - saídas de dados
   soma
   subtração
   multiplicação
   divisão
3 - processamento
    obter a n1
	obter a n2

	calcular a soma
	calcular a subtração	
	calcular a multiplicação
	calcular a divisão
		
	imprimir a soma
	imprimir a subtração	
	imprimir a multiplicação
	imprimir a divisão
	
4 - fórmulas:
  n1+n2
  n1-n2
  n1*n2	
  n1/n2

*/

#include <stdio.h>
#include <locale.h> //Pra mudar linguagem 

main(){
	
    setlocale(LC_ALL, "Portuguese"); //Pra mudar linguagem 
	
	float n1,n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	
	printf("\nDigite o segundo numero: ");
	scanf("%f",&n2);
		
	printf("\nA soma dos valores: %f",n1+n2);
	printf("\nA subtração dos valores: %f",n1-n2);
	printf("\nA multiplicação dos valores: %f ",n1*n2);	
	printf("\nA divisão dos valores: %f \n",n1/n2);	
	return 0;
}