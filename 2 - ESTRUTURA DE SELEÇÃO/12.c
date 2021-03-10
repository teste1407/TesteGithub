/*
Criar um programa que calcule o Salário Líquido, os Descontos e os Acréscimos de um funcionário:

Descontos: 

- IR: para Salário Bruto:
até R$900,00 Isento, de 
R$900,01 até R$3.000,00 3%, de 
R$3.000,01 até R$4.000,00 5%, 
acima de R$4.000,00 7%. 

- Faltas: 3 % por falta. 
- Plano de Saúde: 6 %.

Acréscimos: 
- Abono: 25 % do Salário Bruto + R$130,00, o valor do abono não pode ser maior que R$1.000,00. 
- Vale-Alimentação: 12 %. 
- Salário Família: R$25,00 por dependente.

• O Salário Líquido será igual ao Salário Bruto – Descontos + Acréscimos. 

• Salário Bruto, número de faltas e quantidade de dependentes deverão ser lidos.
 
• Todas as porcentagens serão calculadas sobre o Salário Bruto. 
• O programa deverá informar o total dos acréscimos, o total dos descontos e o salário líquido.
----------------------------------------------------------------------------------------------------
1 - entradas de dados
	Salario Bruto, Quantidade faltas, Quantidade dependentes
	
2 - saídas de dados
	Acrescimos, Descontos, Salario Liquido
	
3 - processamento
	obter 	Salario Bruto, Quantidade faltas, Quantidade dependentes
	calcular Acrescimos, Descontos, Salario Liquido
	
	imprimir Acrescimos, Descontos, Salario Liquido
	
4 - fórmula

	Faltas= SalarioBruto*0.03
	PlanoSaude=SalarioBruto*0.06
	Desconto=IR+Faltas+Plano
	
	Abono= SalarioBruto*0.25 + 130
	Vale=SalarioBruto*0.12
	SalarioFamilia=25*quantidade dependente
	Acrescimo=Abono+Vale+SalarioFamilia
	
	SalarioLiquido= Salário Bruto – Descontos + Acréscimos

*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float salariobruto,plano, desconto,abono,vale,salariofamilia,acrescimo,salarioliquido, IR, DescFaltas;
	int faltas, dependentes;
	
	printf("Salario Bruto: ");
	scanf("%f",&salariobruto);
	
	printf("Quantidade de Faltas: ");
	scanf("%d",&faltas);
	
	printf("Quantidade dependentes");
	scanf("%d",&dependentes);
	
	if(salariobruto<=900){
		IR=0;
		}else if((salariobruto>=900.01) && (salariobruto<=3000)){
			IR=(salariobruto*0.03);
			}else if((salariobruto>=3000.01) && (salariobruto<=4000)){
				IR=(salariobruto*0.04);
			   	}else{
					IR=(salariobruto*0.07);
		}
	
	DescFaltas= (salariobruto*0.03*faltas);
	plano=(salariobruto*0.06);
	desconto=(IR+DescFaltas+plano);
	abono= (salariobruto*0.25 + 130);
	vale=(salariobruto*0.12);
	salariofamilia=(25*dependentes);
	acrescimo=(abono+vale+salariofamilia);
	
	salarioliquido = (salariobruto-desconto+acrescimo);
	
	printf("Salario Liquido: %f \n",salarioliquido);
	printf("Acrescimos: %f \n",acrescimo);
	printf("Descontos: %f \n",desconto);
	
	return 0;
}
