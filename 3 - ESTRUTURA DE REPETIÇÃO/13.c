/*
Escreva um programa que calcule e escreva o valor de S:

S = 1 + 3 + 5 + 7 + ... + 99
    -   -   -   -         --
    1   2   3   4         50
    
    
---------------------------------------------------
1 - Entrada de Dado
	Não há
2 - Saidade Dados
	S
3 - Processamebto
	imprimir S
4 - Formula
 	 
 	S = 1 + 3 + 5 + 7 + ... + 99
    -   -   -   -             --
    1   2   3   4             50 
 	 
*/

#include <stdio.h>

main()
{

	float s,x,y;
	
	for(x=1,y=1,s=0;x<=99;x=x+2,y=y+1){
	  s=s+(x/y);	
	}
	printf("S: %f",s);
	
	
	return 0;
}
