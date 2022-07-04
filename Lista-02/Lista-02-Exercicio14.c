#include <stdio.h>
#define rendUm 0.005
#define rendDois 0.04
 int main(){

  int investimento,op,resultadoUm,resultadoDois;
  printf("INFORME O VALOR QUE DESEJA INVETIR \n");
  scanf("%d",&investimento);
  printf("DIGITE 1 SE DESEJA INVESTIR COM A POUPANCA \n");
  printf("DIGITE 2 SE DESEJA INVESTIR COM O FUNDO DE RENDA FIXA \n");
  scanf("%d",&op);
  switch (op) {
  case 1:
     resultadoUm = investimento*rendUm;
     resultadoDois = investimento + resultadoUm;
     printf("O RENDIMENTO MENSAL EH DE %dR$ \n",resultadoUm);
     printf("O INVESTIMENTO ATULIZADO EH DE %dR$ \n",resultadoDois);
       break;
  case 2:
    resultadoUm = investimento*rendDois;
     resultadoDois = investimento + resultadoUm;
     printf("O RENDIMENTO MENSAL EH DE %dR$ \n ",resultadoUm);
     printf("O INVESTIMENTO ATULIZADO EH DE %dR$ \n",resultadoDois);
        break;
  default:
    printf("A OPCAO DIGITADA EH INVALIDA\n");
  }



 return 0;
 }
