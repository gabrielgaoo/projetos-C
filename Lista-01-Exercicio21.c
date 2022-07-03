#include <stdio.h>
int main(){

 int codigo,qtd;
 float operacaoUm,operacaoDois,desconto;
  printf("INFORME O CODIGO DO PRODUTO \n");
   scanf("%d",&codigo);
  printf("A QUANTIDADE COMPRADA DE PRODUTOs\n");
   scanf("%d",&qtd);

   if((codigo>=1)&&(codigo<=10)()){
    operacaoUm = qtd*10;
    desconto = operacaoUm*0.05;
    operacaoDois = operacaoUm-desconto;
   printf("O PRECO UNITARIO DESTE PRODUTO EH--> 10R$\n");
   printf("O VALOR TOTAL DA NOTA EH-->%.2fR$\n",operacaoUm);
   printf("O DESCONTO SERA DE -->%.2fR$\n",desconto);
   printf("O PRECO FINAL DEPOIS DO DESCONTO EH -->%.2fR$\n",operacaoDois);

 } else if((codigo>=11)&&(codigo<=20)){
   operacaoUm = qtd*15;
    desconto = operacaoUm*0.05;
    operacaoDois = operacaoUm-desconto;
   printf("O PRECO UNITARIO DESTE PRODUTO EH--> 10R$\n");
   printf("O VALOR TOTAL DA NOTA EH-->%.2fR$\n",operacaoUm);
   printf("O DESCONTO SERA DE -->%.2fR$\n",desconto);
   printf("O PRECO FINAL DEPOIS DO DESCONTO EH -->%.2fR$\n",operacaoDois);
 } else if((codigo>=21)&&(codigo<=30)){


 }else if((codigo>=31)&&(codigo<=40)){

 }












return 0;
}
