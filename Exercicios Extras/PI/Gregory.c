/*
GREGORY

PI = 1 - 1 + 1 - 1 + 1
--   -   -   -   -   -
4    1   3   5   7   9

*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	
	double pi, x,y,n,i;
		
  printf("\nDigite a quantidade de termos para a série de gregory: " );
  scanf("%lf", &n);
  
  
  for(pi=0,i=1,x=1,y=1;i<=n;i++,y=y+2){
	  
	  pi = pi + (pow(-1,i+1))*(x/y);
	  
  }
  pi=pi*4;
  printf("PI: %lf",pi);
  return 0;
  
}