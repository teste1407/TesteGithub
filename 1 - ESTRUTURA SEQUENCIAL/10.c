/*
Escreva um programa em linguagem C que contenha a declaração de três constantes, cada uma
possuindo um tipo e valor diferente. 
-----------------------------------------------------------------------------------------------
1 - entradas de dados

2 - saídas de dados
  Constante 1
    Constante 2
      Constante 3
3 - processamento
	imprime   Constante 1
		imprime   Constante 2
			imprime   Constante 3
4 - fórmula
  não há  
*/
#include <stdio.h>
#define PI 3.14
#define RUA "minas gerais"
#define NUMERO 1'

main(){
	
	printf("%f",&PI);
	printf("%s",&RUA);
	printf("%d",&NUMERO);

	return 0;
		
}