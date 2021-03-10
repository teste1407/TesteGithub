/*
Tendo como dados de entrada dois pontos quaisquer de um plano cartesiano
 P(X1,Y1)e Q(X2,Y2)
calcule e mostre a distância entre eles. 
A distância é dada pela fórmula:
raiz((X2 - X1)^2 + (Y2 - Y1)^2)
--------------------------------------------------------------------------------
1 - entradas de dados
  x1
  x2
  y1
  y2
2 - saídas de dados
  distancia
3 - processamento
    obter a x1
	obter a x2
	obter a y1
	obter a y2
	
	calcular a distancia
	imprimir a distancia
	
4 - fórmulas:
    d=(sqrt((pow(X,2))+(pow(Y,2))));
*/


#include <stdio.h> // Para printf
#include <stdlib.h>
#include <math.h>
#include <locale.h> //Pra mudar linguagem 

main(){
	
	float x1,x2,y1,y2,d,X,Y;
	
    setlocale(LC_ALL, "Portuguese"); //Pra mudar linguagem 
    
    printf("Digite o ponto X1:  ");
    scanf("%f",&x1);
    
	printf("Digite o ponto Y1:  ");
    scanf("%f",&y1);
    
    printf("Digite o ponto X2:  ");
    scanf("%f",&x2);
    
    printf("Digite o ponto Y2:  ");
    scanf("%f",&y2);
    
    X=x2-x1;
    Y=y2-y1;
    
    d=(sqrt((pow(X,2))+(pow(Y,2))));
    
    printf("Distancia entre os pontos = %.2f \n",d);
    
    return 0;
}