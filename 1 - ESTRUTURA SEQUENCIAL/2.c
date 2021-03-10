/*
2. Calcular a média final obtida por um aluno, 
para 4 notas bimestrais.
--------------------------------------------------------------------------------

1 - entradas de dados
  nota1, nota2, nota3, nota4
2 - saídas de dados
  média
3 - processamento
  obter a nota1
	obter a nota2
	obter a nota3
	obter a nota4
	calcular a média
	imprimir a média
4 - fórmulas:
  média = (nota1 + nota2 + nota3 + nota4) / 4		 
  
*/


#include <stdio.h>
#include <locale.h> //Pra mudar linguagem 

main(){

    setlocale(LC_ALL, "Portuguese"); //Pra mudar linguagem 
	float n1,n2,n3,n4,media;
	 
	 printf("Nota da primeira prova: ");
	 scanf("%f", &n1);
	 
	 printf("\nNota da segunda prova: ");
	 scanf("%f", &n2);	 
	
	 printf("\nNota da terceira prova: ");
	 scanf("%f", &n3);
	 
	 printf("\nNota da quarta prova: ");
	 scanf("%f", &n4);	
	 
	 media=(n1+n2+n3+n4)/4;
	 
	 printf("\nSua média é: %.2f \n",media); 	
	
	return 0;
}