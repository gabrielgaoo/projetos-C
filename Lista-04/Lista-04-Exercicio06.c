#include <stdio.h>
#include <string.h>
#define v 10
int main(){
    char G[v][v],R[v][v];
    int i,acertos=0;
    for(i=0;i<v;i++){
        printf("insira o gabarito da prova\n");
        scanf("%s", G[i]);

    }

  for(i=0;i<v;i++){
  printf("GABARITO == %s\n", G[i]);
  }
  for(i=0;i<v;i++){
        printf("isira suas repostas\n");
        scanf("%s", R[i]);
  }
   for(i=0;i<v;i++){
    printf("RESPOSTAS == %s\n", R[i]);
    }
       for(i=0;i<v;i++){
       if(strcmp(R[i],G[i])==0){
       acertos++;

       }
       }
          printf("ACERTOS == %d\n",acertos);
          if(acertos>=7){
            printf("APROVADO!!\n");
          }else if(acertos<7){
            printf("REPROVADO!!\n");
          }
return 0;
}
