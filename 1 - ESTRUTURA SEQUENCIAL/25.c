/*
Escreva um programa para calcular e exibir a área de uma circunferência. A fórmula para a área é:
A= p*R², onde A é a área da circunferência, p = 3.14 e R é o raio da circunferência. O raio deve ser
fornecido pelo usuário.
----------------------------------------------------------------------------------------------------
1 - entradas de dados
    raio circulo
  
2 - saídas de dados
    área círculo
  
3 - processamento
    obter medida do raio do circulo

    calcular area circulo

    imprimir area circulo
	  
4 - fórmula
  area circulo = (pi*raio^2)

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float pi,rcirculo,areacir;
			
	printf("\nQual o raio do circulo?  ");
	scanf("%f", &rcirculo);
			
	pi=3.14;
	
	areacir=(pi*(pow(rcirculo,2)));
    		
	printf("\nA area do circulo é: %.2f \n",areacir);
	
	return 0;	
				
}