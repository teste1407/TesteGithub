/*
Escreva um programa em linguagem C que contenha a declaração de uma variável do tipo int chamada
número. Peça então para a pessoa informar por meio do teclado um valor para esta variável. Se o valor
for menor que 0 exiba a seguinte mensagem “O número digitado (numero) é menor que 0.”. Caso
contrário exiba a mensagem “O número digitado (numero) é maior ou igual a 0.”. O trecho (numero)
se refere ao valor da variável número. Exemplo de funcionamento do programa
--------------------------------------------------------------------------------------------------------
1 - entradas de dados
	numero
	
2 - saídas de dados
	maior que zero
	menor que zero
	
3 - processamento
	
	obter numero

	Verificar se é 	maior que zero
	Verificar se é 	menor que zero	
	
	imprimir maior,menor
	
4 - fórmula
	não há
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int numero;
	printf("Digite um numero: ");
	scanf("%d",&numero);
	
	if(numero<=0){
		printf("%d é menor que zero",numero);
	}
	else{
		printf("%d é maior que zero",numero);
	}
	
	return 0;
}