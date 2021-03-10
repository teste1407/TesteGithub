/*
Escreva um programa que receba duas notas de um aluno (float), calcule e mostre a média aritmética

Sendo:

nota>=0 && nota<3 Reprovado
nota>=3 && nota<7 Exame
nota>=7 && nota<=10 Aprovado
------------------------------------------------------------------------------------------------------
1 - entradas de dados
	n1,n2;
	
2 - saídas de dados
	nota final
	
3 - processamento
	obter n1,n2
	
	imprimir nota
	
4 - fórmula
 	 (n1+n2)/2
*/
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float n1,n2,nota;
	
	printf("Nota 1: ");
	scanf("%f",&n1);
	
	printf("Nota 2: ");
	scanf("%f",&n2);
	
	nota=(n1+n2)/2;
	
	if(nota>=0 && nota<3){
		printf("Nota: %.2f, Reprovado",nota);
	}
	else if(nota>=3 && nota<7){
		printf("Nota: %.2f, Exame",nota);
	}else{
		printf("Nota: %.2f, Aprovado",nota);		
	}
	
return 0;	
}
