/*
EULER 2

PI^4 =   1  +   1   +  1   +  1  
----    ---    ---    ---    --- ...
 90     1^4    2^4    3^4    4^4  
 

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	double pi, x, y, n , i;
	
	printf("\nDigite a quantidade de termos para a série de euler2: " );
	scanf("%lf", &n);
	
	for(pi=0,i=1,x=1,y=1;i<=n;i++,y++){
		
		pi = pi + (x/(pow(y,4)));
	}
	pi=(pow(90*pi,0.25));
	
	printf("PI: %lf",pi);
	
	return 0;
}
