/*
Escreva um programa que receba:
• O código do produto comprado; e
• A quantidade comprada do produto.
Calcule e mostre:
• O preço unitário do produto comprado, seguindo a Tabela I;
• O preço total da nota;
• O valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
• O preço final da nota depois do desconto.

******************** Tabela 1 *******************
(cod>=1) && (cod<=10)  ------ R$10
(cod>=11) && (cod<=20) ------ R$15
(cod>=21) && (cod<=30) ------ R$20
(cod>=31) && (cod<=40) ------ R$30

******************** Tabela 2 *******************
(preco<250)                 ------ 5%
(preco>=250) && (cod<=500)  ------ 10%
(preco>500)                 ------ 15%

--------------------------------------------------------

1 - entradas de dados
	cod
	quant
	
2 - saídas de dados
	valor
	
3 - processamento
	obter cod
	obter quant
	
	imprimir valor
	
4 - fórmula
 	   nao ha

*/
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int cod,quant;
	float preco, valorfinal;
	
	printf("Digite o codigo: ");
	scanf("%d",&cod);	
		
	printf("Digite a quantidade: ");
	scanf("%d",&quant);	

	if((cod>=1) && (cod<=10)){
		preco=(10*quant);
	}else if((cod>=11) && (cod<=20)){
		preco=(15*quant);		
	}else if((cod>=21) && (cod<=30)){
		preco=(20*quant);		
	}else if((cod>=31) && (cod<=40)){
		preco=(30*quant);		
	}else{
		printf("Codigo incorreto");
		preco=0;
	}
	if(preco<250){
		   valorfinal=((preco)-(preco*0.05));	
	}else if((preco>=250) && (cod<=500)){
		   valorfinal=((preco)-(preco*0.10));		
	}else{
		   valorfinal=((preco)-(preco*0.15));		
	}
	printf("Valor Final: %.2f",valorfinal);
	
	return 0;
}

