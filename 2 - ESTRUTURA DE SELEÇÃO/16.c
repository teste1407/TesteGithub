/*
Escreva um programa que diga se uma capital brasileira é da região Nordeste ou Sudeste, 
de acordo com a opção digitada pelo usuário. 
No caso do usuário digitar o nome de uma capital que não esteja entre as opções, 
escreva que a capital é de outra região.
----------------------------------------------------------------------------------------
1 - entradas de dados
	
	**************Região Nordeste*****************
	Alagoas              – Capital: Maceió.
	Bahia                – Capital: Salvador.
	Ceará                – Capital: Fortaleza.
	Maranhão             – Capital: São Luís.
	Paraíba              – Capital: João Pessoa.
	Pernambuco           – Capital: Recife.
	Piauí                – Capital: Teresina.
	Rio Grande do Norte  – Capital: Natal.
	Sergipe              – Capital: Aracaju.
	
	**************Região Sudeste*******************	
	Espírito Santo       – Capital: Vitória.
	Minas Gerais         – Capital: Belo Horizonte.
	São Paulo            – Capital: São Paulo.
	Rio de Janeiro       – Capital: Rio de Janeiro.
	
2 - saídas de dados
	região Nordeste ou Sudeste
	
3 - processamento
	obter capital
	
	imprimir região e estado
	
4 - fórmula
 	 não há

*/
#include <stdio.h>
#include <string.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	char capital[50];
	
	printf("Digite uma Capital da Região Nordesde ou Sudeste,\nsem acento e todas letras minusculas: ");
	fflush(stdin);
	gets(capital);
	
	if(strcmp(capital,"maceio") == 0){
	printf("\nCapital: Maceió, Estado: Alagoas, Região: Nordeste\n");		
	}
	else if(strcmp(capital,"salvador") == 0){
	printf("\nCapital: Salvador, Estado: Bahia, Região: Nordeste\n");	
	}
	else if(strcmp(capital,"fortaleza") == 0){
	printf("\nCapital: Fortaleza, Estado: Ceará, Região: Nordeste\n");	
	}	
	else if(strcmp(capital,"sao luis") == 0){
	printf("\nCapital: São Luís, Estado: Maranhão, Região: Nordeste\n");	
	}
	else if(strcmp(capital,"joao pessoa") == 0){
	printf("\nCapital: João Pessoa, Estado: Paraíba, Região: Nordeste\n");	
	}
	else if(strcmp(capital,"recife") == 0){
	printf("\nCapital: Recife, Estado: Pernambuco, Região: Nordeste\n");	
	}
	else if(strcmp(capital,"teresina") == 0){
	printf("\nCapital: Teresina, Estado: Piauí, Região: Nordeste\n");	
	}
	else if(strcmp(capital,"natal") == 0){
	printf("\nCapital: Natal, Estado: Rio Grande do Norte, Região: Nordeste\n");	
	}
	else if(strcmp(capital,"aracaju") == 0){
	printf("\nCapital: Aracaju, Estado: Sergipe, Região: Nordeste\n");	
	}
	else if(strcmp(capital,"vitoria") == 0){
	printf("\nCapital: Vitória, Estado: Espírito Santo, Região: Sudeste\n");	
	}			
	else if(strcmp(capital,"belo horizonte") == 0){
	printf("\nCapital: Belo Horizonte, Estado: Minas Gerais, Região: Sudeste\n");	
	}	
	else if(strcmp(capital,"sao paulo") == 0){
	printf("\nCapital: São Paulo, Estado: São Paulo, Região: Sudeste\n");	
	}	
	else if(strcmp(capital,"rio de janeiro") == 0){
	printf("\nCapital: Rio de Janeiro, Estado: Rio de Janeiro, Região: Sudeste\n");	
	}	
	else{
		printf("A capital não exite ou não pertence a região Nordeste ou Sudeste");
	}
	
	return 0;
}


