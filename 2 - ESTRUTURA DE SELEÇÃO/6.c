/*
Para 2 números quaisquer, informar:
a) o maior
b) o menor
c) se são iguais

---------------------------
1 - entradas de dados
	n1,n2
	
2 - saídas de dados
	maior,menor,igual.
	
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
	int n1,n2;
	
	printf("Digite N1: ");
	scanf("%d",&n1);
	
	printf("Digite N2: ");
	scanf("%d",&n2);
	
	if(n1>n2){
		printf( " n1: %d é maior que n2: %d\n\n",n1,n2);
		return 0;	
	}
		if(n1<n2){
		printf( " n1: %d é menor que n2: %d \n\n",n1,n2);
		return 0;	
	}
	else{
	printf( " n1: %d é igual a n2: %d \n\n",n1,n2);	
	return 0;
	}
}