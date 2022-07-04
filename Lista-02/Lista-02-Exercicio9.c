#include <stdio.h>
#define percentUm 0.05
#define percentDois 0.10
#define percentTres 0.15
#define impostUm 0.15
#define impostDois 020
int main(){

 int custo,porcent;
  printf("INFORME O CUSTO DE FABRICA DO SEU CARRO\n");
  scanf("%d",&custo);
  if(custo<12000){
    porcent = (custo*percentUm)+custo;
    printf("O VALOR FINAL DO CARRO EH %d",porcent);
  } else if ((custo>=12000)&&(custo<=25000)){
      porcent = (custo*percentDois)+(custo*impostUm)+custo;
      printf("O VALOR FINAL DO CARRO EH %d",porcent);
  } else if (custo>25000){
    porcent= (custo*percentTres)+(custo*impostDois)+custo;
    printf("O VALOR FINAL DO CARRO EH %d",porcent);
  }








 return 0;
}
