/*
5-Calcular a velocidade média para um veículo que percorre uma distância X em um tempo Y
-----------------------------------------------------------------------------------------
1 - entradas de dados
  distancia
  tempo
2 - saídas de dados
  velocidade media
3 - processamento
    obter distancia percorrida
    obter o tempo 
    calcular velocidade
    imprimir velocidade
4 - fórmula
  v=distancia/tempo
*/


#include <stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	
	float d,t;
	
	printf("Distancia percorrida:  ");
	scanf("%f",&d);
	
	printf("\nTempo Gasto:  ");
	scanf("%f",&t);	
	
	
	printf("\n Velocida Média: %.2f \n",d/t);
	
	return 0;
		
}