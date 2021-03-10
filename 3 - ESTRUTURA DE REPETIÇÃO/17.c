/*
Escreva um programa que calcule e escreva a soma dos 50 primeiros termos da seguinte série:

S = 1000 - 997 + 994 - 991 + ...
    ----   ---   ---   --- 
      1     2     3     4
      
      
1 - Entrada de Dado
	Não há
2 - Saidade Dados
	S
3 - Processamebto
	Calcular S
	imprimir S
4 - Formula

S = 1000 - 997 + 994 - 991 + ...
    ----   ---   ---   --- 
      1     2     3     4

*/

#include <stdio.h>
#include <math.h>


main()
{
	float deno, num, s;
	
	for(num=1000, s=0,deno=1; deno<=50;num=num-3,deno=deno+1){
		s = s + ((pow(-1,deno+1)*num)/deno);
	}
	printf("S: %f",s);
	
	return 0;
}