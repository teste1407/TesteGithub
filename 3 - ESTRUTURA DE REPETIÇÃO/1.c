/*
Obter o nome e a idade de um usuário e escrever na tela a seguinte mensagem: Hello! FULANO, você
tem XX anos, para um grupo de 10 pessoas.
------------------------------------------------------------------------------------------------

	1 - ENTRADA DE DADOS
		idade
		nome

	2 - SAIDA DE DADOS
		Hello! FULANO, você tem XX anos

	3 - PROCESSAMENTO
		obter idade
		
		imprimir idade

	4 - FORMULAS
  	NÃO HÁ
  	
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int idade,n;
	char nome[100];
	
	
		for(n = 1;n <= 10;n = n + 1){
			
			printf("Qual seu nome? ");
			fflush(stdin);
			gets(nome);
			
			
			printf("Qual sua idade?");
			scanf("%d",&idade);
			
		printf("\Hello! %s, você tem %d anos \n\n",nome,idade);
	}	
	
	return 0;
}