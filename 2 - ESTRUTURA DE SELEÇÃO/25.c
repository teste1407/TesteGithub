/*
Numa papelaria, até 100 folhas, a cópia custa R$ 0,25, e 
acima de 100 folhas custa R$ 0,20. 
Dado o total de cópias, informe o total a ser pago.
-------------------------------------------------------------
1 - entradas de dados
	copia
	valor
	
2 - saídas de dados
	valor
	
3 - processamento
	obter copia
	
	imprimir valor
	
4 - fórmula
 	 não há
*/

#include <stdio.h>
#include <locale.h>

main()
{
	int copia;
	float valor;
	
	printf("Quantidade de copias: ");
	scanf("%d",&copia);
	
	if(copia<=100){
		valor=(copia*0.25);
	}else {
		valor=(copia*0.20);
	}
	printf("Valor a ser pago: %.2f", valor);
	return 0;
}