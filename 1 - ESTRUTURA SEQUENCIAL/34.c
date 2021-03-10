/*
34. Calcular a quantidade de latas de tinta necessárias, e também o custo, para pintar um tanque
cilíndrico de combustível, em que são fornecidos a altura e o raio do mesmo, além do preço da lata de
tinta.
Sabe-se que:
a)cada lata contém 5 litros de tinta;
b)cada litro de tinta pinta 3 metros quadrados;
-------------------------------------------------------------------------------------------------------
1 - entradas de dados
	altura
	raio
	preco
	
2 - saídas de dados
	qtd lata
	preco
	
3 - processamento
    obter a altura
	obter a raio
	obter o preco
	
	calcular a area
	calcular a qtd lata
	calcular o preco
	
	imprimir a qtd lata
	imprimir o preco
	
4 - fórmulas:
	area cilindro = 2*pi*raio cilindro*(altura cilindro+raio cilindro)
	tinta= area cilindro / 3
	lata= tinta / 5
	custo=lata*preco

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float rcilindro, hcilindro, preco, custo, areacil;
	int lata, tinta;
	
	printf("\nQual o raio do cilindro?  ");
	scanf("%f", &rcilindro);			
	printf("\nQual a altura do cilindro?  ");
	scanf("%f", &hcilindro);
	printf("\nQual o preço?  ");
	scanf("%f", &preco);
	
	areacil= (2*M_PI*rcilindro)*(rcilindro+hcilindro);
	
	tinta= (areacil / 3);
	lata= (tinta / 5);
	custo=(lata*preco);
	
	printf("\nLatas: %d",lata);
	printf("\nPreço: %f",custo);
   	printf("\nA area do cilindro é: %.2f \n",areacil);			
	
	return 0;
}