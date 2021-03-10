/*
Calcular e apresentar a quantidade de galões cheios de 5 litros de combustível necessária em uma
viagem utilizando-se um automóvel que faz 12Km/l. O usuário fornecerá o tempo gasto e a velocidade
média na viagem.
------------------------------------------------------------------------------------------------


1 - entradas de dados
  velocidae
  tempo
  
2 - saídas de dados
 	 qtd galao
  
3 - processamento
    obter velocidade
    obter o tempo 
    
    calcular qtdgalao
    
4 - fórmula

distancia=velocidade*tempo

*/


#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float d,t,v;
	int qtdgalao;
	
	printf("Velocidade:  ");
	scanf("%f",&v);
	
	printf("\nTempo Gasto:  ");
	scanf("%f",&t);	
	
	d=(v*t);
	qtdgalao=(d/60);
	
	
	printf("\n Quantidade de Galões: %d \n",qtdgalao);
	
	
	return 0;
}