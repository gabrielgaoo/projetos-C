/*
11. Fa�a uma fun��o em C chamada METADE que divida um valor do tipo float (passado como par�metro)
pela metade.
*/
# include <stdio.h>
 float METADE(float *MET);
int main(){

float met,resp;
  printf("INSIRA O VALOR DO FLOAT\n");
  scanf("%f",&met);
    METADE(&met);
   printf("METADE EH --> %.2f\n",METADE(&met));




return 0;
}
float  METADE(float *MET){
    float aux;

    return *MET/2;



}
