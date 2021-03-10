/*
Calcular as raízes de uma equação do 2º grau, sendo que os valores A, B e C são fornecidos pelo usuário,
levando em consideração a análise da existência de raízes reais.
-------------------------------------------------------------------------------------------------------
1 - entradas de dados
	a
	b
	c
	
2 - saídas de dados
	x1
	x2
	
3 - processamento
	obter a, b, c
	
	calcular delta
	calcular x1 e x2
	
	imprimir x1 e x2
	
4 - fórmula
 	 
 	 delta=((pow(b,2))-4*a*c) --------------- Delta não pode ser negativo
 	 
 	 x1=((-b+(pow(delta,0.5)))/2*a)
 	 x2=((-b+(pow(delta,0.5)))/2*a)
 	 
 	 
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float a, b, c, delta, x1, x2;
	
	printf("Digite o valor de a: ");
	scanf("%f",&a);
	
	printf("Digite o valor de b: ");
	scanf("%f",&b);
	
	printf("Digite o valor de c: ");
	scanf("%f",&c);	
	
	delta=((pow(b,2))-4*a*c);
	
	if(delta<0){
		
		printf("Raiz menor que zero, não existe raiz\n\n");
		
	}
	else{
		
	x1=((-b+(pow(delta,0.5)))/(2*a));
	x2=((-b-(pow(delta,0.5)))/(2*a));
	
	printf("x1: %.2f \n",x1);
	printf("x2: %.2f \n",x2);	
	}

	return 0;
	
}