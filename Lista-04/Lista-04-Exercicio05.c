#include <stdio.h>
#define V 80
 int main(){
   int vetor[V],i,menor,pos;
   for(i=0;i<V;i++){
    printf("DIGITE UM NUMERO \n");
    scanf("%d",& vetor[i]);


   }
   for(i=0;i<V;i++){
  if(vetor[i]<menor){
  menor = vetor[i];
  pos = i;
   }
   }
printf("o menor numero esta na posicao %d e eh -->%d\n",pos,menor);







 return 0;
 }
