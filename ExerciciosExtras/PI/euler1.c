/*
EULER 1

PI^2 =  1  +   1   +  1   +  1  
----   ---    ---    ---    --- ...
 6     1^2    2^2    3^2    4^2  
 

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	double pi, x, y, n , i;
	
	printf("\nDigite a quantidade de termos para a s�rie de euler1: " );
	scanf("%lf", &n);
	
	for(pi=0,i=1,x=1,y=1;i<=n;i++,y++) {
		pi = pi + (x/(pow(y,2)));
	}
	pi=(pow(6*pi,0.5));
	
	printf("PI: %lf",pi);
	
	return 0;
}
