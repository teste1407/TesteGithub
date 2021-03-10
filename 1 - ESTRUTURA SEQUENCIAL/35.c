/*
Calcular o salário final de um trabalhador, recebendo a quantidade de horas trabalhadas, a
quantidade de horas extras, quantidade de horas ausentes e o valor do salário mínimo, sabendo que:
a)as horas trabalhadas e ausentes valem 4% do salário mínimo;
b)as horas extras valem 50% a mais do que as horas trabalhadas;
c)o salário final é igual a soma das horas trabalhadas com as hora extras, descontadas as horas
ausentes e 11% de INSS.
------------------------------------------------------------------------------------------------
1 - entradas de dados

	quantidade de horas trabalhadas - qh
	quantidade de horas extras      - qe   
	quantidade de horas ausentes    - qa 
	valor do salário mínimo         - sm
	INSS						    -inss
	
2 - saídas de dados
	salário final
	
3 - processamento
	obter quantidade de horas trabalhadas - qh
	obter quantidade de horas extras      - qe   
	obter quantidade de horas ausentes    - qa 
	obter valor do salário mínimo         - sm
	
	calcular o salário final              - sf
	
	imprimir salário final

4 - fórmulas:
 
	a=(sm*0.04)*(qh);
	b=(sm*0.04)*(qa);
	c=(sm*0.06)*(qe);
	inss=(sm*0.11);
	sf=(qh+qe-qa-inss);

*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	   
	   float qh,qa,qe,inss,sf,sm,a,b,c;
	   
	   printf("valor do salário mínimo: ");
	   scanf("%f",&sm);
	   
	   printf("quantidade de horas trabalhadas: ");
	   scanf("%f",&qh);
	   
	   printf("quantidade de horas extras: ");
	   scanf("%f",&qe);
	   
	   printf("quantidade de horas ausentes: ");
	   scanf("%f",&qa);
	   
	   
		a=(sm*0.04)*(qh);
		b=(sm*0.04)*(qa);
		c=(sm*0.06)*(qe);
		inss=(sm*0.11);
		sf=(a+c-b-inss);

	   printf("\nSalário Total: %f \n",sf);
			   	
	
	return 0;
}







