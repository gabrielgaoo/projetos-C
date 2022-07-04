/*
10. Faça uma função em C que leia um número inteiro e, usando a função SINAL (criado na questão
anterior), mostre se ele é maior, menor ou igual a zero.
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
