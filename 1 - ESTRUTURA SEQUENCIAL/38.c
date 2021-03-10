/*
Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular seu rendimento, 
ela deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses. 
Sabendo-se que a fórmula usada para este cálculo é: 
valor acumulado = (p * (1 + i)n) / i, 
onde i = taxa, p = aplicação mensal, n = número de meses.

--------------------------------------------------------------------------------------------------

1 - entradas de dados

	valor da aplicação mensal   - p
	taxa                        - i
	número de meses             - n
  
2 - saídas de dados

 	valor acumulado             - v
  
3 - processamento
    obter valor da aplicação mensal
    obter taxa
	obter  número de meses
    
    calcular valor acumulado
    
4 - fórmula

	valor acumulado = (p * (1 + i)n) / i
*/

#include <stdio.h>
#include <locale.h>

main()
{
	int n;
	float v,p,i;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Valor constante da aplicação mensal: ");
	scanf("%f",&p);

	printf("Taxa: ");
	scanf("%f",&i);
	
	printf("Número de meses: ");
	scanf("%d",&n);
	
	v= ((p * (1 + i)* n) / i);
	
	printf("Valor Acumulado: %f",v);	
	
	return 0;
}