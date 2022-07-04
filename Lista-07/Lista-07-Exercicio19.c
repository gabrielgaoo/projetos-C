/*
19. Faça uma função em C chamada HMS para receber uma medida de tempo expressa apenas em
segundos em retornar esta medida convertida para horas, minutos e segundos.
*/
#include<stdio.h>
  float HMS (float seg);

int main(){
  float SEG;
  float aux,AUX;
  float hms (float seg);
  printf("digite a medida expressa em segundos-->");
  scanf("%f",&SEG);
  printf("\n");
      aux = HMS(SEG);
      AUX = hms(SEG);
  printf("A medida convertida em:\n horas-->%.2f\n minutos--->%.2f\n segundos-->%.2f\n",AUX,aux,SEG);




return 0;
}
float HMS (float seg){
   float min;
   min = seg/60;
   return min;


}
float hms (float seg){
float aux;
aux = seg/3600;
return aux;
}
