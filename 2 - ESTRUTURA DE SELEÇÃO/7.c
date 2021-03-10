/*
Obter um valor qualquer e perguntar ao usuário se este valor é em dólares ou em reais. Caso sejam
dólares, convertê-los para reais. Se forem reais, convertê-los para dólares.
-------------------------------------------------------------------------------------------------
1 - entradas de dados
	valor real ou dollar
	
2 - saídas de dados
	real ou dollar
	
3 - processamento
	obter valor
	
	imprimir valor em real ou dollar
	
4 - fórmula
 	 1 Dollar = 3.87 Real
*/
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float real, dollar;
	int n;
	
	printf("Se deseja convertar Dollar para Real Digite 1, o contrario digite 0: ");
	scanf("%d",&n);
	
	if(n==1){
		
			printf("\nDigite o Valor em Dollar: ");
			scanf("%f",&dollar);
			
			real=(dollar*3.86);
			
			printf("Valor em dollar %.2f\n",dollar);
			printf("Valor em real %.2f\n",real);

			
		return 0;
	}
		if(n==0){
			
			printf("\nDigite o Valor em Real: ");
			scanf("%f",&real);
			
			dollar=(real/3.86);
			
			printf("Valor em real %.2f\n",real);
			printf("Valor em dollar %.2f\n",dollar);		
		
		return 0;
	}
	else{
		
		printf("\nVocê não digitou 1 ou 0 \n");
		return 0;
	}

}