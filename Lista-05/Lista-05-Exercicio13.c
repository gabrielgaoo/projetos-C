/*
Faça um programa em C que calcule a média dos elementos da diagonal principal de uma matriz 10 X
10 de inteiros.
*/
#include <stdio.h>
#define LIN 10
#define COL 10
int main(){
    int M[LIN][COL],media,soma;
    int i,j;
    for(i=0;i<LIN;i++){
    for(j=0;j<COL;j++){
        printf("PREENCHENDO A MATRIZ %d<**>%d\n",i,j);
        scanf("%d",&M[i][j]);
     }
   }
   for(i=0;i<LIN;i++){
    for(j=0;j<COL;j++){
         if(j==i){
          soma+= M[i][j];

         }

     }
    }
             media =  soma/10;
            printf("a media de diagonal principal eh %d\n",i,j,media);











return 0;
}
