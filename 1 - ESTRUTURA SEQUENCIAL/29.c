/*
Ler uma temperatura em graus Centígrados e apresente-a convertida em graus Fahrenheit. A
fórmula é: F = (9 * C + 160)/5
----------------------------------------------------------------------------------------
1 - entradas de dados
    temperatura em graus Centígrados
  
2 - saídas de dados
    temperatura em graus Fahrenheit
  
3 - processamento
    obter temperatura em graus Centígrados

    calcular temperatura em graus Fahrenheit

    imprimir temperatura em graus Fahrenheit
	  
4 - fórmula
  F = (9 * C + 160)/5

*/

#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	float C, F;
	
	printf("temperatura em graus Centígrados: ");
	scanf("%f",&C);
	
	F=((9*C+160)/5);
	  
	printf("temperatura em graus Fahrenheit: %.3f",F);
	
	return 0;
}