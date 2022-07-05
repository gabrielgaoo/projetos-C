/*
Faça um programa em C que receba quatro notas de um aluno, calcule e mostre a
média aritmética das notas e a mensagem de aprovado ou reprovado, considerando para
aprovação a média 7.
*/
#include <stdio.h>
 int main(){
 int notaUm,notaDois,notaTres,notaQuatro,media;
 printf("INFORME A NOTA SUA PRIMEIRA PROVA\n");
   scanf("%d",&notaUm);
  printf("INFORME A NOTA SUA SEGUNDA  PROVA\n");
   scanf("%d",&notaDois);
  printf("INFORME A NOTA SUA TERCEIRA PROVA\n");
   scanf("%d",&notaTres);
  printf("INFORME A NOTA SUA QUARTA PROVA\n");
   scanf("%d",&notaQuatro);
   media = (notaUm+notaDois+notaTres+notaQuatro)/4;
   printf("SUA MEDIA NA DISCIPLINA EH---> %d",media );
    if (media>=7)
      {
        printf("\nPARABENS VOCE PASSOU NA DISCIPLINA!!!");

      }
  else
     {
      printf("\nQUE PENA VOCE, NAO ATINGIU A MEDIA PARA SER APROVADO NA DISCIPLINA");
     }
  
  return 0;
 }
