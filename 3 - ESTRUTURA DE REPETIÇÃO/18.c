/*
Escreva um programa que calcule e escreva a soma dos 30 primeiros termos da série:

S = 480 - 475 + 470 - 465 + ...
    ---   ---   ---   ---
     10   11    12    13
     
      
1 - Entrada de Dado
	Não há
2 - Saidade Dados
	S
3 - Processamebto
	Calcular S
	imprimir S
4 - Formula

S = 480 - 475 + 470 - 465 + ...
    ---   ---   ---   ---
     10   11    12    13


*/

#include <stdio.h>
#include <math.h>

main()
{
	float deno, num, s;
	
	for(num=480,deno=10,s=0;deno<=40;deno=deno+1,num=num-5){
		s = s +(((pow(-1,deno))*num)/deno);
	}
	printf("S: %f",s);
	
	return 0;
}