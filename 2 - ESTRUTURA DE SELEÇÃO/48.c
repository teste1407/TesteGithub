/*
Escreva um programa que receba o preço de um produto e seu código de origem e 
mostre sua procedência. A procedência obedece à tabela a seguir. 
Tente fazer uma versão usando a estrutura IF-ELSE e outra com a estrutura SWITCH-CASE.

1                      - SUL
2                      - NORTE
3                      - LESTE
4                      - OESTE
5 OU 6                 - NORDESTE
7, 8 OU 9              - SUDESTE
(cod>=10) && (cod<=20) - CENTRO-OESTE
(cod>=21) && (cod<=30) - NORDESTE


-----------------------------------------------------------------------------------------
1 - entradas de dados
	preco
	codigo
	
2 - saídas de dados
	preco
	codigo
	
3 - processamento
	obter preco
	obter codigo
	
	
	imprimir preco e codigo
	
4 - fórmula
 	   nao ha

*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float preco;
	int cod;
	
	printf("Preço do Produto: ");
	scanf("%f",&preco);
	
	printf("Codigo: ");
	scanf("%d",&cod);	
	/*
	if(cod==1){
		printf("SUL\n");
	}else if(cod==2){
		printf("NORTE\n");
	}else if(cod==3){
		printf("LESTE\n");
	}else if(cod==4){
		printf("OESTE\n");
	}else if((cod==5)||(cod==6)){
		printf("NORDESTE\n");
	}else if((cod==7)||(cod==8)||(cod==9)){
		printf("SUDESTE\n");
	}else if((cod>=10) && (cod<=20)){
		printf("CENTRO-OESTE\n");
	}else if((cod>=21) && (cod<=30)){
		printf("NORDESTE\n");
	}else{
		printf("Codigo nao existe\n");
	}
	printf("Preco: %f\n",preco);
	*/
	switch(cod){
		case 1:
			printf("SUL\n");
			break;
		case 2:
			printf("NORTE\n");
			break;
		case 3:
			printf("LESTE\n");
			break;
		case 4:
			printf("OESTE\n");
			break;
		case 5 ... 6:
			printf("NORDESTE\n");
			break;
		case 7 ... 9 :
			printf("SUDESTE\n");
			break;
		case 10 ... 20 :
				printf("CENTRO-OESTE\n");
				break;	
		case 21 ... 30 :
				printf("NORDESTE\n");
				break;			
		default :
				printf("Codigo nao existe\n");				

	}
		
		printf("Preco: %.2f\n",preco);
		
	return 0;
}