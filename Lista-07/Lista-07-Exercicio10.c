/*
10. Fa�a uma fun��o em C que leia um n�mero inteiro e, usando a fun��o SINAL (criado na quest�o
anterior), mostre se ele � maior, menor ou igual a zero.
*/
#include <stdio.h>
void SINAL(int n);
int main(){
   int N;
   printf("digite o valor\n");
   scanf("%d",&N);
   SINAL(N);

return 0;
}
void SINAL(int n){
    if(n>0){
      printf("maior do que zero\n");
    }
    if(n<0){
      printf("menor do que zero\n");
    }
    if(n==0){
      printf("igual do que zero\n");

    }
}
