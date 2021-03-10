/*
Para um grupo indeterminado de 2 números quaisquer, informar para cada grupo:
a) o maior
b) o menor
c) se são iguais

------------------------------------------------------------------------------
1  - Entradade Dados
	n1
	n2
2 - Saida de Dados
	a) o maior
	b) o menor
	c) se são iguais
3 - Processamento
	obter numero
	imprimir maio, menor, igual;

*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n1,n2,x;
	
	do{
		printf("Digite N1: ");
		scanf("%d",&n1);
		
		printf("Digite N2: ");
		scanf("%d",&n2);
		
		if(n1>n2){
			printf("Maior: %d, Menor: %d\n",n1,n2);			
		}
		else if(n2>n1){
			printf("Maior: %d, Menor %d\n",n2,n1);
		}else
		printf("São Iguais\n");
		
		printf("Digite 1 para continuar ou digite qualquer outra coisa para sair: ");
		scanf("%d",&x);
		
	}while( x == 1);
	
	
	return 0;
}