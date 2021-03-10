/*
Escrever um programa em linguagem C que permita que o usu�rio selecione qual das m�dias ele deseja calcular:

M�dia Aritm�tica
M�dia Ponderada
M�dia Geom�trica
M�dia Harm�nica
Ap�s a sele��o da op��o, o usu�rio deve fornecer de 4 a 10 os valores para o c�lculo da m�dia.


*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	
	setlocale(LC_ALL,"Portuguese");
	float media,nota,denominador,numerador,peso,quantnotas;
	int n,x,i;

	x=1;

	while(x==1){
	
		printf("\nPrograma de C�lculo de M�dia");
		printf("\n1- Media Aritmetica");
		printf("\n2- Media Ponderada");
		printf("\n3- Media Geom�trica");
		printf("\n4- Media Harm�nica");
		printf("\n\nQual Media deseja realizar? ");
		scanf("%d",&n);

		printf("\nDigite a quantidade de notas, de 4 a 10 notas: ");
		scanf("%f",&quantnotas);
		
		if(quantnotas<4 || quantnotas>10) {
			printf("\nQuantidade de notas incorreta\n");
		} else {
			
		if(n==1) {
			//Media Aritmetica
			for(media=0,i=1,n=1;n<=quantnotas;n++,i++)
			{
				printf("Digite a Nota %d: ",i);
				scanf("%f",&nota);
				
				media = media + nota;
			}
			media = media / quantnotas ;
			printf("Nota Final: %f \n",media);
				
		} else if(n==2) {
			//Media Ponderada
			for(denominador=0,numerador=0,media=0,i=1,n=1;n<=quantnotas;n++,i++)
			{
				printf("Digite a Nota %d: ",i);
				scanf("%f",&nota);
				
				printf("Digite o Peso %d: ",i);
				scanf("%f",&peso);
				
				numerador = numerador + (nota*peso);
				denominador = denominador + peso;
			}
			media = numerador / denominador ;
			printf("Nota Final: %f \n",media);		
			
		}else if(n==3){
    		//M�dia Geom�trica
			for(media=1,i=1,n=1;n<=quantnotas;n++,i++)
			{
				printf("Digite a Nota %d: ",i);
				scanf("%f",&nota);
				
				media = media * nota;
			}
			
			media = (pow(media,(1/quantnotas)));
			printf("Nota Final: %f \n",media);	
				
		}else if(n==4){
			//M�dia Harm�nica
			for(media=0,i=1,n=1;n<=quantnotas;n++,i++)
			{
				printf("Digite a Nota %d: ",i);
				scanf("%f",&nota);
				
				media = media + (1/nota);
			}
			media = 1/(media / quantnotas) ;
			printf("Nota Final: %f \n",media);				
		}else{
			printf("Nenhuma das Op��es foi selecionada \n");
		}}
	
		printf("Deseja realizar outra conta, se SIM, digite 1: ");
		scanf("%d",&x);	

		}

	return 0;
}