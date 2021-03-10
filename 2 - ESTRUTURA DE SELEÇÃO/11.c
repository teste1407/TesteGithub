/*
Escreva um programa que leia 3 valores A, B e C e 
verifique se esses valores representam os lados de um triângulo. 
Para que seja um triângulo, todos os lados devem ser maiores que zero e 
nenhum lado deve ser igual ou maior que a soma dos outros dois lados. 
Se A, B e C representam os lados de um triângulo, 
então calcule e imprima sua área: 
Área = (S*(S-a)*(S-b)*(S-c))2 onde 
S = (a+b+c)/2 
Informe também o tipo do triângulo: 
Escaleno: todos os lados diferentes. 
Isósceles: 2 lados iguais. 
Eqüilátero: todos os lados iguais.
------------------------------------------------------------------------------
1 - entradas de dados
	a,b,c
	OBS: A, B, C >0
	OBS: Não pode A>=B+C, B>=A+C, C>=A+B
	
2 - saídas de dados
	Area
	Tipo
	
3 - processamento
	obter a,b,c
	calcular area
	
	imprimir area e tipo
	
4 - fórmula

	area = ((S*(S-a)*(S-b)*(S-c))2);
	S = ((a+b+c)/2);

*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float a,b,c,S,area;
	
	printf("Digite o valor de a: ");
	scanf("%f",&a);
	
	printf("Digite o valor de b: ");
	scanf("%f",&b);
	
	printf("Digite o valor de c: ");
	scanf("%f",&c);	
	
	if((a<=0)||(b<=0)||(c<=0)||(a>=(b+c))||(b>=(a+c))||(c>=(a+b))){
	printf("ERRO");
	return 0;
	}
	else{
		
	S = ((a+b+c)/2);
	area = ((S*(S-a)*(S-b)*(S-c))*2);
	
	if((a!=b)&&(a!=c)&&(b!=c)){
	printf("Area: %.2f, Escaleno",area);
	return 0;
	}
	if((a==b)||(a==c)||(b==c)){
	printf("Area: %.2f, Isósceles",area);
	return 0;
	}
	if((a==b)&&(a==c)&&(b==c)){
	printf("Area: %.2f, Equilátero",area);
	return 0;
	}
	}
}

