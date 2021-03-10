/*
3. Calcular a média ponderada obtida por um aluno para 2 notas bimestrais.
-------------------------------------------------------------------------------
1 - entradas de dados
  nota1
  nota2
  peso nota 1
  peso nota 2
2 - saídas de dados
  média
3 - processamento
    obter a nota1
	obter a nota2
	obter o peso nota 1
	obter o peso nota 2
	
	calcular a média
	imprimir a média
	
4 - fórmulas:
  média = (nota1*peso nota1 + nota2*peso nota2) / (peso nota1+peso nota2);

 */

#include <stdio.h>
#include <locale.h> //Pra mudar linguagem 

main(){

    setlocale(LC_ALL, "Portuguese"); //Pra mudar linguagem 
	float n1,n2,media;
    int p1,p2;
    
	 printf("Nota da primeira prova: ");
	 scanf("%f", &n1);
	 
	 printf("\nPeso da primeira prova: ");
	 scanf("%d", &p1);	 
	 
	 printf("\nNota da segunda prova: ");
	 scanf("%f", &n2);	 
	

	 printf("\nPeso da segunda prova ");
	 scanf("%d", &p2);	
	 
  media = (n1*p1+n2*p2)/(p1+p2);
	 
	 printf("\nSua média é: %.2f \n",media); 	
	
	return 0;
}