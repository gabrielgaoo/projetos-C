#include <stdio.h>
#define V 10
 int main(){
  int vetor[V],i,soma=0;
  for(i=0;i<V;i++){
    printf("DIGITE OS NUMEROS \n");
    scanf("%d",&vetor[i]);
  }
 for(i=0;i<V;i++){
   printf("\n IMPRESSAO%d  \n ",vetor[i]);
 }

  for(i=0;i<V;i++){
         if(vetor[i]%2==0){
            printf("\n valores pares == %d \n",vetor[i]);
            soma++;
         }
         }
         printf("o numero de elementos eh %d\n",soma);









 return 0;
 }
