/*
Altere o programa do item 11 para que a pessoa possa informar os dados para as variáveis e depois
mostre os valores informados pela mesma.
--------------------------------------------------------------------------------------------------
1 - entradas de dados
  a
  b
  c
2 - saídas de dados
  não há
3 - processamento
  obter a
  obter b
  obter c
  
  imprimir a
  imprimir b
  imprimir c
    
4 - fórmula
	não há
*/

#include <stdio.h> // Para printf
#include <locale.h> //Pra mudar linguagem 

main()
{
	
	int a;
	float b;
	char c[100];
	
		setlocale(LC_ALL, "Portuguese"); //Pra mudar linguagem
		
    	printf("Digite uma palavra: ");

	   	fflush(stdin); //limpa buffer de teclado, sempre usar antes de ler string
		gets(c); //lê nome, tbm lê espaços
	
	
		printf("\nDigite um numero inteiro: ");
		scanf("%d", &a);

		printf("\nDigite um numero real: ");
		scanf("%f", &b);

		printf("\n numero inteiro: %d\n",a);
		printf("\n numero real: %f\n",b);
		printf("\n Palavra: %s\n",c);

	return 0;
}