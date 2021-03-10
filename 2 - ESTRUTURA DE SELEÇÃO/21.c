/*
Escreva um programa em linguagem C que contenha a declaração de uma variável do tipo char
chamada sexo. Peça então para a pessoa informar por meio do teclado um valor para esta variável. Se
o valor for igual a ‘M’ exiba a seguinte mensagem “Sexo: Masculino”. Se o valor for igual a ‘F’ exiba a
seguinte mensagem “Sexo: Feminino”. Se for outro valor qualquer exiba a seguinte mensagem “Sexo:
Inválido!”.
----------------------------------------------------------------------------------------------------
1 - entradas de dados
	sexo
	
2 - saídas de dados
	M
	F
	Sexo Invalido
	
3 - processamento
	
	obter sexo

	Verificar sexo
	
	imprimir sexo
	
4 - fórmula
	não há

*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	char sexo;
	
	printf("Digite F para feminino e M para Masculino: ");
	fflush(stdin);
	scanf("%c",&sexo);

	switch(sexo){
		case 'M' : case 'm': 
			printf("Sexo Masculino");
			break;
		case 'F' : case 'f':
			printf("Sexo Feminino");
			break;
		default:
			printf("Sexo Invalido");		
	}		
	return 0;
}



