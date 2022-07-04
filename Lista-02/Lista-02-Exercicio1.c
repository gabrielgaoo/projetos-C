#include <stdio.h>
 int main(){

 int notaUm,notaDois,notaTres,notaQuatro,media;
 printf("INFORME A NOTA SUA PRIMEIRA PROVA\n");
 scanf("%d",&notaUm);
  printf("INFORME A NOTA SUA SEGUNDA  PROVA\n");
 scanf("%d",&notaDois);
  printf("INFORME A NOTA SUA TERCEIRA PROVA\n");
 scanf("%d",&notaTres);
  printf("INFORME A NOTA SUA QAURTA PROVA\n");
 scanf("%d",&notaQuatro);
 media = (notaUm+notaDois+notaTres+notaQuatro)/4;
   printf("SUA MEDIA NA DISCIPLINA EH---> %d",media );
 if (media>=7){
        printf("\nPARABENS VOCE PASSOU NA DISCIPLINA!!!");

    }else{
      printf("\nQUE PENA VOCE, NAO ATINGIU A MEDIA PARA SER APROVADO NA DISCIPLINA");
    }









  return 0;
 }
