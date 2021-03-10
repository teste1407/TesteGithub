/*
Escreva um programa que receba quatro notas de um aluno (float), 
calcule e mostre a média aritmética das notas e a mensagem de aprovado ou reprovado, 
considerando para aprovação média igual ou maior que 7.
-------------------------------------------------------------------------------------
1 - entradas de dados
	n1,n2,n3,n4
	
2 - saídas de dados
	nota final
	
3 - processamento
	obter n1,n2,n3,n4
	
	imprimir nota
	
4 - fórmula
 	 (n1+n2+n3+n4)/4
*/
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float n1,n2,n3,n4,nota;
	
	printf("Nota 1: ");
	scanf("%f",&n1);
	
	printf("Nota 2: ");
	scanf("%f",&n2);
	
	printf("Nota 3: ");
	scanf("%f",&n3);
	
	printf("Nota 4: ");
	scanf("%f",&n4);
	
	nota=((n1+n2+n3+n4)/4);
	
	if(nota>=7){
		printf("Aprovado, Nota: %.2f",nota);
	}else{
		printf("Reprovado, Nota: %.2f",nota);
	}
	
	return 0;
}