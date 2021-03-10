/*
WALLIS

pi = 2*2 * 4*4 * 6*6 * 8*8
--   ---   ---   ---   ---
2    1*3   3*5   5*7   7*9

-------------------------------
1 - Entrada de Dados
	Quantidade de termos - n

2 - Saida de Dados
	Valor de PI

3 - Processamento
	Obter quantidade de termos - n
	Calcular o valor de pi pelo método de Wallis
	Mostrar aproximação calculada

4 - Formulas

pi = 2*2 * 4*4 * 6*6 * 8*8
--   ---   ---   ---   ---
2    1*3   3*5   5*7   7*9
 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	double pi, x,y,n,i;
		
	printf("\nDigite a quantidade de termos para cálculo da aproximação: " );
	scanf("%lf", &n);

	for(i=1,y=1,x=2,pi=1;i<=n;i=i+1,x=x+2,y=y+2){
		pi =  pi * ((x*x)/(y*(y+2)));
	}
		
	pi=2*pi;
		
	printf("Pi: %lf",pi);
	return 0;
}	
	
