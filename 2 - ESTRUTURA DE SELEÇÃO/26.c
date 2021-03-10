/*
Numa fábrica, uma máquina precisa de manutenção sempre que o 
número de peças defeituosas supera 10% da produção. 
Dados o total de peças produzidas e o total de peças defeituosas, 
informe se a máquina precisa de manutenção.
--------------------------------------------------------------------------
1 - entradas de dados
	total pecas produzidas
	total pecas defeituosas
	
2 - saídas de dados
	manutencao sim ou nao
	
3 - processamento
	obter total pecas produzidas
	obter total pecas defeituosas
	
		
	imprimir manutenção sim ou nao
	
4 - fórmula
 	 não há
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int prod, defeit, manut;
	
	printf("Total de Peças Produzidas: ");
	scanf("%d",&prod);
	
	printf("Total de Peças defeituosas: ");
	scanf("%d",&defeit);
	
	manut=(prod*0.1);
	
	if(defeit>manut){
		printf("Precisa de Manutenção\n");
	}
	else{
		printf("Não precisa de manutenção\n");
	}
	return 0;
}