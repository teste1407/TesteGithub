/*
Escrever um programa em linguagem C que permita que o usuário selecione qual das médias ele deseja calcular:

Média Aritmética
Média Ponderada
Média Geométrica
Média Harmônica
Após a seleção da opção, o usuário deve fornecer de 4 a 10 os valores para o cálculo da média.


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
	
		printf("\nPrograma de Cálculo de Média");
		printf("\n1- Media Aritmetica");
		printf("\n2- Media Ponderada");
		printf("\n3- Media Geométrica");
		printf("\n4- Media Harmônica");
		printf("\n\nQual Media deseja realizar? ");
		scanf("%d",&n);

		printf("\nDigite a quantidade de notas, de 4 a 10 notas: ");
		scanf("%f",&quantnotas);
		
		if(quantnotas<4 || quantnotas>10){
			printf("\nQuantidade de notas incorreta\n");
		}else{
			
		if(n==1){
			//Media Aritmetica
			for(media=0,i=1,n=1;n<=quantnotas;n++,i++)
			{
				printf("Digite a Nota %d: ",i);
				scanf("%f",&nota);
				
				media = media + nota;
			}
			media = media / quantnotas ;
			printf("Nota Final: %f \n",media);
				
		}else if(n==2){
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
    		//Média Geométrica
			for(media=1,i=1,n=1;n<=quantnotas;n++,i++)
			{
				printf("Digite a Nota %d: ",i);
				scanf("%f",&nota);
				
				media = media * nota;
			}
			
			media = (pow(media,(1/quantnotas)));
			printf("Nota Final: %f \n",media);	
				
		}else if(n==4){
			//Média Harmônica
			for(media=0,i=1,n=1;n<=quantnotas;n++,i++)
			{
				printf("Digite a Nota %d: ",i);
				scanf("%f",&nota);
				
				media = media + (1/nota);
			}
			media = 1/(media / quantnotas) ;
			printf("Nota Final: %f \n",media);				
		}else{
			printf("Nenhuma das Opções foi selecionada \n");
		}}
	
		printf("Deseja realizar outra conta, se SIM, digite 1: ");
		scanf("%d",&x);	

		}

	return 0;
}