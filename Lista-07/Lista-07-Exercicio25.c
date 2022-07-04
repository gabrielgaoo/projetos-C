#include <stdio.h>
/*
25. Faça uma função em C que receba um número inteiro e imprima o mês correspondente ao número. Por
exemplo, 2 corresponde à “fevereiro”. A função deve mostrar uma mensagem de erro caso o número
recebido não faça sentido. Gere também um algoritmo que leia um valor e chame o procedimento
criado.
*/
 void mes(a);
int main (){
int a;
 printf("digite um numero inteiro\n ");
 scanf("%d",&a);
 mes(a);







return 0;
}
void mes(int A){
   if(A== 1 ){
    printf("janeiro\n");
   }
  else if(A== 2 ){
    printf("Fevereiro\n");
   }\else if(A== 3 ){
    printf("Março\n");
  }
 else if(A== 4 ){
    printf("Abril\n");
  }
   else if(A== 5 ){
    printf("Maio\n");
   }
   else if(A== 6 ){
    printf("Junho\n");
   }
   else if(A== 7 ){
    printf("Julho\n");
   }
   else if(A== 8 ){
    printf("Agosto\n");
   }
   else if(A== 9 ){
    printf("Setembro\n");
   }
   else if(A== 10 ){
    printf("Outubro\n");
   }
  else  if(A== 11 ){
    printf("Novembro\n");
   }
   else if(A== 12 ){
    printf("Dezembro\n");
   }
   else{
      printf("ERRO!\n");

   }
}

