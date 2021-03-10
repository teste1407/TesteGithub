/*
Escrever um programa para calcular, a partir do valor do 
salário bruto e da quantidade de dependentes, o valor: 
a) do Imposto de Renda 
b) do INSS 
c) do Salário Líquido
-------------------------------------------------------------
1 - entradas de dados
	salario bruto
	dependentes
	
2 - saídas de dados
	IR
	Salario Liquido 
	INSS
	
3 - processamento
	obter salario bruto
	obter quantidade dependentes
	
	calcular INSS
	calcular salario Liquido
	calcular IR
	
	imprimir INSS
	imprimir salario Liquido
	imprimir IR
	
4 - fórmula
	salario=(salariobruto-INSS-(179.71*dependentes));
		IR=((salario*aliquota)-parcela);
	

*/
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float salariobruto,IR,salarioliquido, INSS, salario;
	int dependentes;
	
	printf("Salario Bruto: ");
	scanf("%f",&salariobruto);
	
	printf("Quantidade dependentes: ");
	scanf("%d",&dependentes);
	
	if(salariobruto<=1317.07){
		INSS=(salariobruto*0.8);
	}
	else if(salariobruto>1317.08 && salariobruto<=2195.12){
		INSS=(salariobruto*0.9);
	}
	else if(salariobruto>2195.13 && salariobruto<=4390.24){
		INSS=(salariobruto*0.11);
	}
	else{
		printf("\nSem Desconto INSS\n");
		INSS=0;
	}	
	salario=(salariobruto-INSS-(179.71*dependentes));
	
	if(salario<=1787.77){
		IR=0;
		printf("Salario: %.2f, IR: %.2f, INSS: %.2f",salario,IR,INSS);
	}
	else if(salario>1787.77 && salario<=2679.29){
		IR=((salario*0.075)-134.08);
		printf("Salario: %.2f, IR: %.2f, INSS: %.2f",salario,IR,INSS);		
	}
	else if(salario>2679.29 && salario<=3572.43){
		IR=((salario*0.15)-335.03);
		printf("Salario: %.2f, IR: %.2f, INSS: %.2f",salario,IR,INSS);		
	}	
	else if(salario>3572.43 && salario<=4463.81){
		IR=((salario*22.5)-602.96);
		printf("Salario: %.2f, IR: %.2f, INSS: %.2f",salario,IR,INSS);		
	}
	else {
		IR=((salario*27.5)-826.15);
		printf("Salario: %.2f, IR: %.2f, INSS: %.2f",salario,IR,INSS);		
	}
return 0;	
}