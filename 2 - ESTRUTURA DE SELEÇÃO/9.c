/*
Criar um programa que leia 2 números. 
Caso o primeiro número lido seja maior que o segundo, 
imprima na tela o primeiro número menos o segundo, 
caso contrário mostre a soma dos dois números.
-------------------------------------------------------------
1 - entradas de dados
	n1,n2
	
2 - saídas de dados
	resultado
	
3 - processamento
	Verificar se é 	maior,menor,igual
	
	imprimir maior,menor,igual
	
4 - fórmula
 	 não há

*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float resultado,n1,n2;
	
	printf("Digite N1: ");
	scanf("%f",&n1);
	
	printf("Digite N2: ");
	scanf("%f",&n2);
	
	if(n1>n2){
		resultado=(n1-n2);
		printf( " Resultado Subtração: %.2f\n\n",resultado);
		return 0;	
	}
		else{
			resultado=n1+n2;
		printf( " Resultado Soma: %.2f \n\n",resultado);
		return 0;	
	}

}