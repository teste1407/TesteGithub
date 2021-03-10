/*
Quais os valores armazenados em SOMA, NOME e TUDO, supondo-se que 
NUM,   X,   COR,     DIA,     TESTE e TESTE2 valem, respectivamente, 
5    , 2,   "AZUL",  "TERÇA", FALSE e TRUE

a. NOME <- DIA
b. SOMA <- (NUM*2/X) + (X + 1)
c. TUDO <- NAO ((TESTE OU TESTE2) E (X <> NUM))
-----------------------------------------------------------------------------------------
1 - entradas de dados
    num
	x
	teste
	teste2
	tudo
	soma
	nome
	cor
	dia
  
2 - saídas de dados
    nome
    soma
    tudo
  
3 - processamento

    calcular soma

    imprimir nome
    imprimir soma
    imprimir tudo
	  
4 - fórmula
  (NUM*2/X) + (X + 1)

*/

#include <stdio.h>
#include <string.h>

main(){
	
	int  teste, teste2,tudo;
	float soma,num,x;
	char nome[20], cor[20]="azul", dia[20]="terca";
	
	num=5;
	x=2;
	teste=0;
	teste2=1;
	
	strcpy(nome,dia);
	soma=((num*2)/x)+(x+1);
	tudo=(!((teste || teste2) && (x != num)));
	printf("\nNome: %s", dia);
	printf("\nSoma: %f",soma);
	printf("\nTudo: %d",tudo);
	return 0;
}