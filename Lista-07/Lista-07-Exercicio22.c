/*
22. Faça uma função em C para ler duas matrizes e apresentar a soma. Utilize funções para ler, somar e
escrever as matrizes.
*/
#include <stdio.h>
#define d1 2
#define d2 3
void preencheM(int A[][d2],int dim);
void preencheM(int B[][d2],int dim);
void somaM(int A[][d2],int B[][d2],int S[][d2],int dim);
int main(){
    int a[d1][d2];
    int b[d1][d2];
    int s[d1][d2];
    preencheM(a,d1);
    preencheM(b,d1);
    somaM(a,b,s,d1);
   printf("IMPRESSAO \n");
    impremeM(s,d1);

return 0;
}
void preencheM(int A[][d2],int dim){
     int i=0,j=0;
     for(i=0;i<dim;i++){
        for(j=0;j<d2;j++){
            printf("preencha a matriz [%d] [%d]\n",i,j);
            scanf("%d",&A[i][j]);
        }
     }
  }
void impremeM(int S[][d2],int dim){
         int i,j;

         for (i=0;i<dim;i++){
                for(j=0;j<dim;j++){
                    printf("%d\n",S[i][j]);
                }
         }
}
void somaM(int A[][d2],int B[][d2],int S[][d2],int dim){
          int i,j;
          for (i=0;i<dim;i++){
            for(j=0;j<d2;j++){
                S[i][j]= A[i][j]+B[i][j];
            }
          }

}
