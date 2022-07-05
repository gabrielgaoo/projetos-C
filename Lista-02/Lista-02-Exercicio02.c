/*
Faça um programa em C que receba duas notas, calcule e mostre a média aritmética e
a mensagem que está na tabela a seguir:
MÉDIA ARITMÉTICA MENSAGEM
0,0 ●------○ 4,0 Reprovado
4,0 ●------○ 7,0 Exame
7,0 ●------● 10,0 Aprovado
*/
#include <stdio.h>
 int main (){
  int notaUm,notaDois,media;
   printf("DIGITE SUA PRIMEIRA NOTA\n");
     scanf("%d",&notaUm);
   printf("DIGITE SUA SEGUNDA NOTA\n");
    scanf("%d",&notaDois);
    media = (notaUm+notaDois)/2;
   printf("SUA MEDIA NA DISCIPLINA EH--->%d",media);
  if(media >=7)
  {
   printf("\nAPROVADO!!!");
  }
     else if (media <=7&&media>=4)
     {
   printf("\nEXAME!!!");
     }
        else if (media<=4)
           {
    printf("\nREPROVADO!!!");
           }








 return 0;
 }
