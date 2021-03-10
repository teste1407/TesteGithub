/*
Calcular a diferença em horas, minutos e segundos para dois horários no mesmo dia, obtidos no
formato HH MM SS (HH = horas; MM = minutos; SS = segundos)
---------------------------------------------------------------------------------------------
1 - entradas de dados

	Hora Final      h1, m1, s1
	Hora Inicial    h2, m2, s2

  
2 - saídas de dados

 	Diferença       h3, m3, s3
  
3 - processamento
    obter Hora Final      h1, m1, s1
	obter Hora Inicial    h2, m2, s2
    
    calcular Diferença 
    
    Imprimir Diferença 
    
4 - fórmula Diferença 

	dif = (s1 + m1 * 60 + h1 * 3600) - (s2 + m2 * 60 + h2 * 3600);
	
	h3= dif / 3600;
	m3= dif % 3600 / 60;
	s3= dif % 3600 % 60;
*/

#include <stdio.h>
int main(){
	int h1, h2, h3, m1, m2, m3, s1, s2, s3, dif;
	
	printf("Hora Final: hh:mm:ss ");
	scanf("%d:%d:%d",&h1,&m1,&s1);
	
	printf("Hora Inicial: hh:mm:ss ");
	scanf("%d:%d:%d",&h2,&m2,&s2);
	
	dif = (s1 + m1 * 60 + h1 * 3600) - (s2 + m2 * 60 + h2 * 3600);
	
	h3= dif / 3600;
	m3= dif % 3600 / 60;
	s3= dif % 3600 % 60;
	printf("\nHora %d, Minuto %d, Segundo %d \n", h3,m3,s3);
	
	
	return 0;
}