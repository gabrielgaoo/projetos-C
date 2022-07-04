/*
28. Faça uma função em C que receba um número natural e imprima os três primeiros caracteres do dia da
semana correspondente ao número. Por exemplo, 7 corresponde à “SAB”. A função deve mostrar uma
mensagem de erro caso o número recebido não corresponda à um dia da semana. Gere também um
algoritmo que utilize essa função, chamando-a, mas antes lendo um valor para passagem de parâmetro.
*/
#include<stdio.h>
    void semana(float*A);
int main(){
   float a;
   printf("insira o numero da semana \n");
   scanf("%f",&a);
   semana(&a);


return 0;
}
 void semana(float *A){

   if(*A==1){
    printf("DOM\n");
   }
   else if(*A==2){
    printf("SEG\n");
   }
   else if(*A==3){
    printf("TER\n");
   }
   else if(*A==4){
    printf("QUA\n");
   }
    else if(*A==5){
    printf("QUI\n");
   }
   else if(*A==6){
    printf("SEX\n");
   }
   else if(*A==7){
    printf("SAB\n");

   }
   else {
    printf("ERRO!\n");
   }

}
