/*
Faça um programa em C que leia um número inteiro A e uma matriz V[30][30] de inteiros. Conte
quantos valores iguais a A estão na matriz e mostre o resultado.

*/
#include <stdio.h>
#define LIN 30
#define COL 30
 int main(){
  int A,v[LIN][COL],i,j,contador;
 printf("DIGITE O VALOR INTEIRO\n");
 scanf("%d",&A);
  for(i=0;i<LIN;i++){
    for(j=0;j<COL;j++){
      printf("insira os valores da matriz %d<***>%d\n",i,j);
      scanf("%d",&v[i][j]);
     }
    }

  for(i=0;i<LIN;i++){
    for(j=0;j<COL;j++){
          if(v[i][j]==A){
            contador++;
           }
        }
      }

     printf("%d valores iguais\n ",contador);







return 0;
}
