/*
28. Fa�a uma fun��o em C que receba um n�mero natural e imprima os tr�s primeiros caracteres do dia da
semana correspondente ao n�mero. Por exemplo, 7 corresponde � �SAB�. A fun��o deve mostrar uma
mensagem de erro caso o n�mero recebido n�o corresponda � um dia da semana. Gere tamb�m um
algoritmo que utilize essa fun��o, chamando-a, mas antes lendo um valor para passagem de par�metro.
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
