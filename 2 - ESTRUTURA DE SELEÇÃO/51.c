/*
Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, 
baseada no número de horas extras e no número de horas que o funcionário faltou ao 
trabalho. O valor do prêmio é obtido pela consulta à tabela que se segue, na qual: 
H = número de horas extras - (2/3 * (número de horas falta))
--------------------------------------------------------------------------------------
 H<600                 ---- 100
(H>=600) && (H<1200)   ---- 200
(H>=1200) && (H<1800)  ---- 300
(H>=1800) && (H<2400)  ---- 400
 H>=2400               ---- 500
---------------------------------------------------------------------------------------
1 - entradas de dados
	horas extra (he)
	horas faltas (nf)
	
2 - saídas de dados
	gratificação
	
3 - processamento
	obter he
	obter nf
	
	imprimir gratificação
	
4 - fórmula
 	   nao ha
 
 */

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int he,nf,grat;
	float H;
	
	printf("Digite o número de horas extras: ");
	scanf("%d",&he);	
		
	printf("número de horas falta: ");
	scanf("%d",&nf);
	
	H = (he - ((2/3) * (nf)));
	
	if(H<600){
		printf("R$ 100,00");
	}else if((H>=600) && (H<1200)){
		printf("R$ 200,00");		
	}else if((H>=1200) && (H<1800)){
		printf("R$ 300,00");		
	}else if((H>=1800) && (H<2400)){
		printf("R$ 400,00");		
	}else{
		printf("R$ 500,00");
	}
	
	
return 0;
	
}