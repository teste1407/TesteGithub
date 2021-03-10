/*
Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. 
A senha é 4531. O programa deve mostrar uma mensagem de permissão de acesso ou não.
----------------------------------------------------------------------------------------
1 - entradas de dados
	senha
	
2 - saídas de dados
	senha correta ou incorreta
	
3 - processamento
	obter senha
	
	imprimir senha correta ou incorreta
	
4 - fórmula
 	 nao ha

*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int senha;
	
	printf("Digite a Senha: ");
	scanf("%d",&senha);
	
	if(senha==4531){
		printf("permissão de acesso aceita");
	}else{
		printf("permissão de acesso negada");
	}
	
	return 0;
}