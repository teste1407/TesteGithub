/*
Escreva um programa que calcule e escreva a seguinte soma:

S =  -2 + 2 +  2  + ... + 2
     --   --   --         -
     50   49   48         1
     
     
--------------------------------------
1 - Entrada de Dado
	Não há
2 - Saidade Dados
	S
3 - Processamebto
	Calcular S
	imprimir S
4 - Formula
 	 
 	 S =  -2 + 2 +  2  + ... + 2
     --   --   --              -
     50   49   48              1

*/


#include <stdio.h>

main()
{
	float s,denominador, numerador;
	
	numerador = 2;
	
	for(s=-0.04,denominador=49;denominador>=1;denominador=denominador-1){
		s= s + (numerador/denominador);
	}
	
	printf("S: %f",s);
	
	return 0;
}