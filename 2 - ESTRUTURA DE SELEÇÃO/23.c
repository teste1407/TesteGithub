/*
Escreva um programa em linguagem C que contenha a declaração de duas variáveis do tipo float chamadas valor1 e valor2. 
Peça então para a pessoa informar por meio do teclado um valor para estas variáveis. 
Se a soma dessas variáveis for maior que 100.25 exiba a seguinte mensagem “A soma dos valores digitados é maior que 100.25”.
Escreva um programa em linguagem C que contenha a declaração de duas variáveis do tipo int chamadas n1 e n2. 
Se o valor da variável n2 for igual a 0 então exiba a seguinte mensagem 
“Não é possível realizar a divisão de um número por 0.”. 
Caso contrário realize a divisão entre n1 e n2 e exiba o resultado.
------------------------------------------------------------------------------------------------------------------------------
1 - entradas de dados
	v1,v2
	n1,n2
	
2 - saídas de dados
	“A soma dos valores digitados é maior que 100.25”
	n1/n2
	
3 - processamento
	obter v1,v2,n1,n2
	
	imprimir resposta
	
4 - fórmula
 	 não há

*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,div;
	float v1,v2,soma;
	
	printf("Digito um valor Inteiro N1: ");
	scanf("%d",&n1);	

	printf("Digito um valor Inteiro N2: ");
	scanf("%d",&n2);	
	
	printf("Digito um valor Real V1: ");
	scanf("%f",&v1);	
	
	printf("Digito um valor Real V2: ");
	scanf("%f",&v2);
	
	soma=v1+v2;
	
	   if(soma>100.25){
		   printf("Soma maior que 100.25\n");
	   }else{
	   printf("Soma: %f",soma);
	   }
	   	   if(n2==0){
		   	   printf("Não é possível realizar a divisão de um número por 0\n");
	   	   }
			  else{
				  div=n1/n2;
				  printf("Divisão: %d\n",div);
			  }
	return 0;
	
		
}
