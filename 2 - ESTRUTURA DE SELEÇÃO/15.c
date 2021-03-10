/*
Em uma empresa, os funcionários que forem solteiros não receberão bônus natalinos. 
Os funcionários que não forem solteiros e tiverem filhos receberão um bônus de 20% 
de seu salário-base (ou seja, receberão o valor de seu salário acrescido de 20%). 
Os funcionários que não forem solteiros e não tiverem filhos receberão um bônus de 15% 
de seu salário-base (ou seja, receberão o valor de seu salário mais 15%).
--------------------------------------------------------------------------------------
1 - entradas de dados
	relacionamento
	filhos
	salario
	
2 - saídas de dados
	bonus natalino
	
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
	int relacionamento, filhos; 
	float salario,salariofinal;
	setlocale(LC_ALL,"Portuguese");
	printf("Solteiro Digite 1 - Não é solteiro Digite 2: ");
	scanf("%d",&relacionamento);
	
	if(relacionamento==1){
		printf("Salario: ");
		scanf("%f",&salario);
		printf("Sem Bonus, salario: %.2f",salario);
		
	}else if(relacionamento==2){
		printf("Quantidade de filhos: ");
		scanf("%f",&filhos);
		
		if(filhos<=0){
			printf("Salario: ");
			scanf("%f",&salario);
			salariofinal=((salario*0.15)+salario);
			printf("Bonus de 15%%, salario final: %.2f",salariofinal);
			
		}else{
			printf("Salario: ");
			scanf("%f",&salario);
			salariofinal=((salario*0.20)+salario);
			printf("Bonus de 20%%, salario final: %.2f",salariofinal);
			
		}
	}else{
		printf("Não Digitou 0 ou 1");
		
	}
	return 0;
}