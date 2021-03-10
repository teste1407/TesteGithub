/*
Dados três números inteiros, verifique se eles podem ser lados de um triângulo e, 
se puderem, classifique o triângulo como equilátero, isóscele ou escaleno. 
Para ser lados de um triangulo cada lado deve ser menor que a soma dos outros dois lados. 
Um triângulo equilátero possui os três lados iguais; um triângulo isóscele possui apenas 
dois lados iguais e em um triângulo escaleno nenhum dos lados é igual.
---------------------------------------------------------------------------------------
1 - entradas de dados
	a,b,c
	OBS: A, B, C >0
	OBS: Não pode A>=B+C, B>=A+C, C>=A+B
	
2 - saídas de dados
	pode ou não ser triangulo
	Tipo
	
3 - processamento
	obter a,b,c
	
	imprimir tipo
	
4 - fórmula
	nao ha

*/
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float a,b,c;
	
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
		
	if((a!=b)&&(a!=c)&&(b!=c)){
	printf("Escaleno");
	return 0;
	}
	if((a==b)||(a==c)||(b==c)){
	printf("Isósceles");
	return 0;
	}
	if((a==b)&&(a==c)&&(b==c)){
	printf("Equilátero");
	return 0;
	}
	}
}


