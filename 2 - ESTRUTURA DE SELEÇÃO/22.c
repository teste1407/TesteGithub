/*
Escreva um programa em linguagem C que contenha a declaração de duas variáveis do tipo int
chamadas a e b. Peça então para a pessoa informar por meio do teclado um valor para estas variáveis.
Se o valor de a for igual ao valor de b exiba a seguinte mensagem “O valor da variável a é igual ao valor
da variável b.”; caso contrário exiba a mensagem “O valor da variável a não é igual ao valor da variável b”.
-----------------------------------------------------------------------------------------------------------------
1 - entradas de dados
	n1,n2
	
2 - saídas de dados
	diferente,igual.
	
3 - processamento
	Verificar se é igual
	
	imprimir igual ou diferente
	
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
	
	if(n1==n2){
		printf( " n1: %d igual n2: %d\n\n",n1,n2);
	}
	else{
	printf( " n1: %d é diferente de n2: %d \n\n",n1,n2);	

	}
		return 0;
}