/*
Resolver a função y = f(x) + g(x), onde:

h=((pow(x,2))-16)

f=h se h>=0
f=1 se h<0

g=((pow(x,2))+16) se f=0
g=0 se f>0

----------------------------------------------------------
1 - entradas de dados
	x
	
2 - saídas de dados
	h
	f
	g
	
3 - processamento
	obter x
	
	calcular h
	
	imprimir h, f, g
	
4 - fórmula

h=((pow(x,2))-16)
g=((pow(x,2))+16)

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float x, h, f, g, y;
	
	printf("Valor de x: ");
	scanf("%f",&x);
	
	h=((pow(x,2))-16);
	
	if(h>=0){
		f=h;
	}
	else{
		f=1;
	}
	if(f==0){
		g=((pow(x,2))+16);
		y=f+g;
		printf("\nh: %.2f, f: %.2f, g: %.2f",h,f,g);
		printf("\nO valor de Y: %.2f",y);
		return 0;
	}
	if(f>0){
		g=0;
		y=f+g;
		printf("\nh: %.2f, f: %.2f, g: %.2f",h,f,g);
		printf("\nO valor de Y: %.2f \n",y);
		return 0;		
	}
	
}
