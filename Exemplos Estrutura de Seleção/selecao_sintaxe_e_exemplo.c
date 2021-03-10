#include <stdio.h>
int main(){
  int a, b;
  char simbol;
  simbol = '+';
  a = 13;
  b = 5;
//estrutura de seleção simples
//----------------------------
//SINTAXE:
//         if <condição>
//           {
//             <comando(s)>
//           }
//o comando IF (SE) verifica a condição (que é uma expressão
//lógica (produz somente resultados TRUE or FALSE)
//se o resultado for TRUE, ENTÃO o(s) comando(s) são executados
//caso contrário, o fluxo de execução segue para o próximo
//comando após o IF
//a utilização de chaves {  } somente é necessária caso haja
//mais de um comando na estrutura IF
//exemplo:
  if (a < b)
    printf("\n. %d e menor do que %d",a,b);
  if (a > b)
    printf("\n. %d e maior do que %d",a,b);
  if (a == b)
    printf("\n. %d e %d sao iguais",a,b);
//estrutura de seleção composta
//----------------------------
//SINTAXE:
//         if <condição>
//           {
//             <comando(s)>
//           }
//           else
//             {
//               <comando(s)
//             }
//o comando IF (SE) verifica a condição (que é uma expressão
//lógica (produz somente resultados TRUE or FALSE)
//se o resultado for TRUE, ENTÃO o(s) comando(s) ligados diretamente
//ao IF (comandos do ENTÃO) são executados
//SENAO (ELSE) o(s) comando(s) do bloco ligado ao ELSE serão
//executados
//a utilização de chaves {  } somente é necessária caso haja
//mais de um comando na estrutura IF
//exemplo:
  if (a < b)
    printf("\n.. %d e menor do que %d",a,b);   //comandos do ENTÃO
    else
      printf("\n.. %d e maior do que %d",a,b); //comandos do SENÃO
//estrutura de seleção encadeada ou aninhada
//------------------------------------------
//permite que um comando IF seja incluído dentro de outro comando
//IF
//exemplo:
  if (a < b)
    printf("\n... %d e menor do que %d",a,b);     //comandos do ENTÃO do 1º if
    else
      if (a > b)                              //comandos do SENÃO do 1º if
        printf("\n... %d e maior do que %d",a,b); //comandos do ENTÃO do 2º if
        else
          printf("\n... %d e %d sao iguais",a,b); //comandos do SENÃO do 2º if

//------------------

  if ((simbol == '+') ||
      (simbol == '/') ||
      (simbol == '-') ||
      (simbol == '*'))
    printf("\n.if OK\n");
    else
      printf("\n.if nao OK\n");

  switch(simbol){
    case '*':
    case '/':
    case '-':
    case '+':
      printf("\n..if OK\n");
      break;
    default:
      printf("\n..if nao OK\n");
  }
  return 0;
}
