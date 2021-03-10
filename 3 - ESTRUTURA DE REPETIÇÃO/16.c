/*
Escreva um programa que calcule e escreva o valor de S onde:

S = 1 - 2 + 3 - 4 + 5 - 6 + ... -10
    -   -   -   -   -   -        --
    1   2   9   16  25  36       100
    

1 - Entrada de Dado
	Não há
2 - Saidade Dados
	S
3 - Processamebto
	Calcular S
	imprimir S
4 - Formula

S = 1 - 2 + 3 - 4 + 5 - 6 + ... -10
    -   -   -   -   -   -        --
    1   4   9   16  25  36       100

*/

#include <stdio.h>
#include <math.h>

main()
{
	float n,s;
	
	for (s=0,n=1; n<=10;n=n+1){
		
		s = s + (((pow(-1,n+1)) * n)/(pow(n,2)));
		
	}
	printf("S: %f", s);
	
	return 0;
}