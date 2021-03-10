/*
Ler um número inteiro representando a quantidade de alunos de uma turma e informe a
quantidade de grupos de 4 alunos que podem ser formados, e quantos alunos ficam de fora, sem formar
um grupo completo
----------------------------------------------------------------------------------------------------

1 - entradas de dados
	qts_alunos

2 - saídas de dados
	qtd_grupos
	qtd_fora
	
3 - processamento
    obter qtd_alunos
	
	calcular qtd_grupos
	calcular qtd_fora
	
	imprimir a qtd_grupos
	imprimir a qtd_fora
	
4 - fórmulas:
	qtd_grupos=(qtd_alunos/4);
	qtd_fora=(qtd_alunos%4);	
    
*/
#include <stdio.h>
#include <locale.h>

main(){
	
	int qtd_alunos, qtd_grupos, qtd_fora;
	
	printf("Quantidade de alunos:  ");
	scanf("%d",&qtd_alunos);
	
	qtd_grupos=(qtd_alunos/4);
	qtd_fora=(qtd_alunos%4);
	
	printf("\nGrupos: %d",qtd_grupos);
	printf("\nAlunos Fora: %d",qtd_fora);
	
	return 0;
}
