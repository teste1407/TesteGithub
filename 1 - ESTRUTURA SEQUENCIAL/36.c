/*
Calcular a diferença em dias, meses e anos entre duas datas fornecidas no formato DD MM AAAA
(DD = dia; MM =mês; AAAA = ano com quatro dígitos)
---------------------------------------------------------------------------------------------
1 - entradas de dados

	Data Mais Nova      d1, m1, a1
	Data Mais Antiga    d2, m2, a2

  
2 - saídas de dados

 	Diferença 		    d3, m3, a3
  
3 - processamento
    obter Data Mais Nova      d1, m1, a1
	obter Data Mais Antiga    d2, m2, a2
    
    calcular Diferença 
    
    Imprimir Diferença  
    
4 - fórmula Diferença 

	dif = (d1 + m1 * 30 + a1 * 365) - (d2 + m2 * 30 + a2 * 365);
	
	a3= dif / 365;
	m3= dif % 365 / 30;
	d3= dif % 365 % 30;

*/


#include <stdio.h>
int main(){
	int d1, d2, d3, m1, m2, m3, a1, a2, a3, dif;
	
	printf("Data mais nova: dd/mm/aaaa ");
	scanf("%d/%d/%d",&d1,&m1,&a1);
	
	printf("Data mais antiga: dd/mm/aaaa ");
	scanf("%d/%d/%d",&d2,&m2,&a2);
	
	dif = (d1 + m1 * 30 + a1 * 365) - (d2 + m2 * 30 + a2 * 365);
	
	a3= dif / 365;
	m3= dif % 365 / 30;
	d3= dif % 365 % 30;
	printf("Dias %d, Meses %d, Ano %d", d3,m3,a3);
	
	
	return 0;
}