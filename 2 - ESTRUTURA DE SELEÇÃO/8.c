/*
Perguntar ao usuário se ele deseja calcular: 
a) a área de um triângulo 
b) a área de um círculo 
c) a área de um cubo 
d) a área de um cilindro 
Solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela.
--------------------------------------------------------------------------------

1 - entradas de dados
    cateto adjacente (base)
    cateto oposto (altura)
    raio circulo
    base cubo
    raio cilindro
    altura cilindro
  
2 - saídas de dados
    area triangulo
    área círculo
    área cubo
    área cilindro
  
3 - processamento
    obter medida cateto adjacente (base)
    obter medida cateto oposto (altura)
    obter medida do raio do circulo
	obter medida base do cubo 
	obter medida raio cilindro
	obter medida altura cilindro
	
	calcular area triangulo
    calcular area circulo
    calcular area cubo
    calcular area cilindro
		
	imprimir area triangulo
    imprimir area circulo
    imprimir area cubo
    imprimir area cilindro
	  
4 - fórmula
  area triangulo = (cateto adjacente*cateto oposto)/2  
  area circulo = (pi*raio^2)
  area cubo = 6*(base do cubo^2)
  area cilindro = 2*pi*raio cilindro*altura cilindro
*/

#include <stdio.h> // Para printf
#include <stdlib.h>
#include <math.h>
#include <locale.h> //Pra mudar linguagem 

main(){
	
	int numero;
	float btriangulo,htriangulo,rcirculo,bcubo,rcilindro,hcilindro;
	float areat,areacir,areacub,areacil;
	
    setlocale(LC_ALL, "Portuguese"); //Pra mudar linguagem 
		
	printf("O que vc quer calcular? \n\n 1 a área de um triângulo \n 2 a área de um círculo	\n 3 a área de um cubo	\n 4 a área de um cilindro  \n\n Digite um número de 1 a 4:  ");	
	scanf("%d",&numero);
	
	if (numero==1)
	{	
			printf("\nQual a medida da base do triângulo?  ");
			scanf("%f", &btriangulo);
	
	   	   	printf("\nQual a altura do triângulo?  ");
	   	   	scanf("%f", &htriangulo);	
	   	   	
	   	   	areat=(btriangulo*htriangulo)/2;
	   	   	
	   	   	printf("\nA area do triangulo é: %.2f \n",areat);
	   	   	
	   	   	return 0;
	}
	
	if (numero==2)	
	{
			printf("\nQual o raio do circulo?  ");
			scanf("%f", &rcirculo);
	
    		areacir= (M_PI*(pow(rcirculo,2)));
    		
	   	   	printf("\nA area do circulo é: %.2f \n",areacir);
	
			return 0;		
	}   	
	
	if (numero==3)	
	{
			printf("\nQual a medida da base do cubo?  ");
			scanf("%f", &bcubo);
	
	
			areacub= 6*(pow(bcubo,2));
			
 	   		printf("\nA area do cubo é: %.2f \n",areacub);
	
			return 0;			
	} 	
	
	if (numero==4)	
	{
			printf("\nQual o raio do cilindro?  ");
			scanf("%f", &rcilindro);			
			printf("\nQual a altura do cilindro?  ");
			scanf("%f", &hcilindro);
	
			areacil= (2*M_PI*rcilindro)*(rcilindro+hcilindro);
			
	   	   	printf("\nA area do cilindro é: %.2f \n",areacil);
	
			return 0;	
			
	} 
 
    else{
    	printf("\nVocê não digitou um numero de 1 a 4 \n");
		return 0;
	}
}