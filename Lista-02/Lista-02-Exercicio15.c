#include <stdio.h>
#define descontUm 0.10
#define decontSDois 0.15
 int main (){
   int preco,resultadoUm,resultadoDois;
   printf("INFORME O PRECO DO SEU PRODUTO\n");
   scanf("%d",&preco);
   if (preco<=30){
  printf("O PRECO ATUAL DO PRODUTO EH %dR$\n",preco);
  printf("O PRODUTO NAO TEM DESCONTO!\n");
   }else if ((preco>30)&&(preco<=100)){
    resultadoUm = preco*descontUm;
    resultadoDois = preco-resultadoUm;
    printf("O PRECO ATUAL DO PRODUTO EH %dR$\n",preco);
    printf("O DESCONTO DESTE PRODUTO EH %dR$\n",resultadoUm);
    printf("O NOVO PRECO DESTE PRODUTO EH %dR$\n",resultadoDois);
   }else if (preco>100){
    resultadoUm = preco*decontSDois;
    resultadoDois = preco-resultadoUm;
    printf("O PRECO ATUAL DO PRODUTO EH %dR$\n",preco);
    printf("O DESCONTO DESTE PRODUTO EH %dR$\n",resultadoUm);
    printf("O NOVO PRECO DESTE PRODUTO EH %dR$\n",resultadoDois);
   }









  return 0;
 }
