#include <stdio.h>
 int main(){
   int codigo,kwh;
   float somaU,somaD,somaT,total=0;

   codigo = 1;
   while (codigo!=0){
    printf("digite-1 se for consumidor residencial\n");
    printf("digite-2 se for consumidor comercial\n");
    printf("digite-3 se for consumidor industrial\n");
    scanf("%d",&codigo);
    printf("qual a quantidade de Kwh consumido no mes\n");
    scanf("%d",&kwh);
       switch (codigo){
     case 1:
        somaU += kwh*0.3;
        printf("%.2f\n",somaU);
       break;

     case 2:
        somaD = kwh *0.5;
        printf("%.2f\n",somaD);
       break;

     case 3:
         somaT+= kwh*0.7;
         printf("%.2f\n",somaT);
       break;
     default:
         total = somaU+somaD+somaT/3;
         printf ("o custo total para cada consumidor \n %.2f residencial\n%.2f comercial\n%.2f industrial\n",somaU,somaD,somaT);
        printf("o consumo de cada um eh = \n %d \n %d \n %d \n",kwh,kwh,kwh);
        printf("a media do consumo geral %.2f\n",total);

   }




   }




  return 0;
 }
