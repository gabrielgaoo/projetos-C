/*
18. Faça uma função em C chamada SEG para receber uma medida de tempo expressa em Horas, Minutos e
Segundos e retornar esta medida convertida apenas para segundos.
*/

#include <stdio.h>
    void SEG (float *HR,float *MIN,float *S);
  int main(){
      float horas,min,seg, resp;
       printf("digite os valores em horas minutos e segundos\n");
       scanf("%f",&horas);
       scanf("%f",&min);
       scanf("%f",&seg);
    SEG(&horas,&min,&seg);
     printf("os valores em segundos horas-->%.2f S minutos->%.2f S segundos-->%.2f S \n",horas,min,seg);

  return 0;
  }
  void SEG (float *HR,float *MIN,float *S){
      float  aux,AUX;
         *HR *= 3600;
         *MIN *= 60;

  }
