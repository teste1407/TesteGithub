/*
Escreva um programa para calcular e escrever a seguinte soma:

S = (35 * 38) + (36 * 37) + (35 * 36) + ... + (1 * 2)
	 -------     -------     -------           -----
	    1           2           3                37
	    
	    
1 - Entrada de Dado
	Não há
2 - Saidade Dados
	S
3 - Processamebto
	Calcular S
	imprimir S
4 - Formula

S = (35 * 38) + (36 * 37) + (35 * 36) + ... + (1 * 2)
	 -------     -------     -------           -----
	    1           2           3                37


 */

#include <stdio.h>

main()
{
	float numerador, denominador, s;
	
	for(s=1330,numerador=37, denominador=2; denominador<=37;denominador=denominador+1,numerador=numerador-1){
		
		s = s + (((numerador-1)*numerador)/denominador);
	}
	
	printf("S: %f",s);
	
	return 0;
}