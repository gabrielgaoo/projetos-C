/*
9. Fa�a uma fun��o em C chamada SINAL que receba como par�metro um valor N inteiro e escreva a
palavra POSITIVO se N for um n�mero maior que zero, NEGATIVO se N for menor que zero, ou ZERO se
N for igual a zero.
*/
   void sinal(int *N);
 #include <stdio.h>
 int main(){
  int n;
  printf("DIGITE UM VALOR INTEIRO\n");
  scanf("%d",&n);
  sinal(&n);



 return 0;
 }
 void sinal(int *N){
    if(*N>0){
        printf("POSITIVO\n");
        }
        else if(*N == 0){
            printf("IGUAL AO ZERO\n");
        }

        else{
            printf("NEGATIVO\n");

        }



 }
