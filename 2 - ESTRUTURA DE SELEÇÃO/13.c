/*
Crie um programa que leia 3 números inteiros diferentes e imprima os números em ordem crescente.
---------------------------------------------------------------------------------------------------
1 - entradas de dados
	n1,n2,n3
	
2 - saídas de dados
	ordem crescente ou decrescente
	
3 - processamento
	obter n1,n2,n3
	
	imprimir ordem crescente ou decrescente
	
4 - fórmula
 	 não há
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,n3;
	
	printf("Digite N1: ");
	scanf("%d",&n1);
	
	printf("Digite N2: ");
	scanf("%d",&n2);
	
	printf("Digite N3: ");
	scanf("%d",&n3);

	if((n1>n2)&&(n1>n3)){
		if(n2>n3){
			printf("%d --- %d --- %d",n3,n2,n1);
		}else{
			printf("%d --- %d --- %d",n2,n3,n1);
		}
	}else if((n2>n1)&&(n2>n3)){
			if(n1>n3){
			printf("%d --- %d --- %d",n3,n1,n2);
		}else{
			printf("%d --- %d --- %d",n1,n3,n2);
		}
	}
	else{
			if(n2>n1){
			printf("%d --- %d --- %d",n1,n2,n3);
		}else{
			printf("%d --- %d --- %d",n2,n1,n3);
		}
		
	}
	return 0;
}