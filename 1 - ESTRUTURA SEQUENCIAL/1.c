/*

1. Obter o nome e a idade de um usuário e escrever na tela a seguinte mensagem: Hello! FULANO,
você tem XX anos!

-------------------------------------------------------------------------------

1 - entradas de dados
  nome
  idade
2 - saídas de dados
  imprimir a frase --> Hello! FULANO, você tem XX anos!
3 - processamento
  obter o nome da pessoa
  obter a idade da pessoa
  escreva a frase, substitundo FULANO pelo nome e XX pela idade
4 - fórmula
  não há  

*/

#include <stdio.h> // Para printf
#include <stdlib.h> // Para system("pause")
#include <locale.h> //Pra mudar linguagem 



main()
{
	
	int id;
	char nome[20];
	
		setlocale(LC_ALL, "Portuguese"); //Pra mudar linguagem
		
    	printf("Nome: ");
        //	scanf("%[^\n]s", &nome); Vai ler até o usuario apertar enter
	   	fflush(stdin); //limpa buffer de teclado, sempre usar antes de ler string
		gets(nome); //lê nome, tbm lê espaços
	
	
		printf("\nIdade: ");
		scanf("%d", &id);


		printf(" \n Hello! %s, você tem %d anos! \n",nome,id);	
	
    system("pause");
    
	return 0;
}