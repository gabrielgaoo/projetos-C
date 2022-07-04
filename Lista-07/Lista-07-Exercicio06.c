/*
6. Faça uma função em C chamada TROCA que receba duas variáveis inteiras (X e Y) e troque o conteúdo
entre elas.
*/
#include <stdio.h>
  void troca(int *a,int *b);
int main(){
  int x,y;
  printf("DIGITE OS VALORES DE X <--> Y RESPECTIVAMENTE\n");
  scanf("%d",&x);
  scanf("%d",&y);
  printf("X= %d <--> Y = %d\n",x,y);
  troca(&x,&y);
  printf("-------------------\n");
   printf("X= %d <--> Y = %d\n",x,y);
return 0;
}
void troca(int *a,int *b){
    int  aux;
     aux = *a;
     *a = *b;
     *b = aux;
}
