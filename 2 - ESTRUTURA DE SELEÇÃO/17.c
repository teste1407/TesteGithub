/*
Escreva um programa que imprime na tela a situação do aluno após a sua nota ser digitada. 
Baseie-se na tabela abaixo: 
a) Nota: de 1 a 2 – Situação: nota péssima 
b) Nota: de 3 a 4 – Situação: nota ruim 
c) Nota: de 5 a 6 – Situação: nota razoável 
d) Nota: 7 – Situação: nota boa 
e) Nota: de 8 a 9 – Situação: nota muito boa 
f) Nota: 10 – Situação: nota ótima
---------------------------------------------------------------------------------------------
1 - entradas de dados
	nota
	
2 - saídas de dados
	Situação
	
3 - processamento
	obter nota
	
	imprimir situação
	
4 - fórmula
 	 não há
*/
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float nota;
	
	printf("nota: ");
	scanf("%f",&nota);
	
	if(nota>=1 && nota<=2){
		printf("\nSituação: nota péssima\n");
	}else if(nota>=3 && nota<=4){
		printf("\nSituação: nota ruim\n");
	}else if(nota>=5 && nota<=6){
		printf("\nSituação: nota razoável\n");
	}else if(nota==7){
		printf("\nSituação: nota boa\n");
	}else if(nota>=8 && nota<=9){
		printf("Situação: nota muito boa");
	}else if(nota==10){
		printf("Situação: nota ótima");
	}
	else{
		printf("Não Digitou uma nota de 1 a 10");
	}
	
	return 0;
}
