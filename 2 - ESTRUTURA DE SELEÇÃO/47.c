/*
Escreva um programa que receba a altura e o sexo de uma pessoa e 
calcule e mostre seu peso ideal, utilizando as seguintes fórmulas 
(onde h é a altura): 
• Para homens: (72.7 * h) - 58. 
• Para mulheres: (62.1 * h) - 44.7
---------------------------------------------------------------------
1 - entradas de dados
	altura
	sexo
	
2 - saídas de dados
	peso ideal
	
3 - processamento
	obter altura
	obter sexo
	
	calcular peso
	
	imprimir peso
	
4 - fórmula
 	    • Para homens: (72.7 * h) - 58. 
		• Para mulheres: (62.1 * h) - 44.7
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float altura,peso;
	char sexo;
	
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	
	printf("Digite F para feminino e M para Masculino: ");
	fflush(stdin);
	scanf("%c",&sexo);
	
	switch(sexo){
			case 'm' : case 'M' :
				peso=((72.7 * altura) - 58);
				printf("Masculino - Peso Ideal: %.2f \n",peso);
				break;
			case 'f' : case 'F' :
				peso=((62.1 * altura) - 44.7);
				printf("Feminino - Peso Ideal: %.2f \n",peso);
				break;	
			default:
				printf("ERRO");
	}
	
	
	return 0;
}





