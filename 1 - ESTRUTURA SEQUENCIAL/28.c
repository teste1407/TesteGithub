/*
Calcular o preço de venda de um carro. O preço de venda é formado pelo preço da montadora,
mais 15% de lucro, mais 11% de IPI, mais 17% de ICM. As porcentagens são sobre o preço da montadora,
que é lido. Informe o preço final e o valor dos impostos.
---------------------------------------------------------------------------------------------------
1 - entradas de dados
	preco montadora
	
2 - saídas de dados
	preco final
	volor imposto
	
3 - processamento
	obter preco montadora


	calcular o 	preco final
	calcular o valor imposto
	
	imprimir o 	preco final
	imprimir o valor imposto

4 - fórmulas:
	precofinal=(precomont+(precomont*0.15)+(precomont*0.11)+(precomont*0.17))
	imposto=(precomont*0.11)+(precomont*0.17)
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float precomont,precofinal,imposto;
	
	printf("Valor do Carro: ");
	scanf("%f",&precomont);
	
	precofinal=(precomont+(precomont*0.15)+(precomont*0.11)+(precomont*0.17));
	imposto=(precomont*0.11)+(precomont*0.17);
		
	printf("Valor Final: %.3f \n",precofinal); 
	printf("Valor imposto: %.3f \n",imposto); 	

	return 0;
}