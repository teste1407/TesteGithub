/*
Elabore um programa que recebe a idade de um nadador. 
O programa deve classificar o nadador em uma das categorias a seguir: 
a) Infantil A = de 5 a 7 anos 
b) Infantil B = de 8 a 10 anos 
c) Juvenil A = de 11 a 13 anos 
d) Juvenil B = de 14 a 17 anos 
e) Sênior = maiores de 18 anos
---------------------------------------------------------------------
1 - entradas de dados
	idade
	
2 - saídas de dados
	Infantil A, Infantil B,Juvenil A, Juvenil B, Sênior;
	
3 - processamento
	obter idade
	
	imprimir classificação
	
4 - fórmula
 	 não há
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	printf("Idade: ");
	scanf("%d",&idade);
	
	if(idade>=5 && idade<=7){
		printf("Infantil A");
	}else if(idade>=8 && idade<=10){
		printf("Infantil B");
	}else if(idade>=11 && idade<=13){
		printf("Juvenil A");
	}else if(idade>=14 && idade<=17){
		printf("Juvenil B");
	}else if(idade>=18){
		printf("Sênior");
	}else{
		printf("Sem classificação");
	}
	
	return 0;
}