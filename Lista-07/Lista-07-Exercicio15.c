/*
15. Faça uma única função em C que retorna o MENOR, o MAIOR e a SOMA de um vetor com 50 elementos
passados por parâmetro. A impressão dos resultados deve ser feita no programa main.
*/
#include <stdio.h>
#define TAM 5
 void  funcao(int vet[],int qtd,int *MAIOR,int *MENOR,int *SOMA);
int main(){
   int i;
   int vet[TAM];
   int maior=0,menor=0,soma=0;
   for(i=0;i<TAM;i++){
    printf("preencha o vetor \n");
    scanf("%d",&vet[i]);
   }
      funcao(vet,TAM,&maior,&menor,&soma);
       printf("MAIOR-->%d \n MENOR-->%d \n SOMA-->%d \n",maior,menor,soma);


return 0;
}
void  funcao(int vet[],int qtd,int *MAIOR,int *MENOR,int *SOMA){
       int i;
      *MAIOR = vet[0];
      *MENOR = vet[0];
      *SOMA = vet[0];
      for(i=1;i<qtd;i++){
          *SOMA += vet[i];
        if(vet[i]<*MENOR){
            *MENOR = vet[i];
        }
        if(vet[i]>*MAIOR){
            *MAIOR= vet[i];
        }
      }


}
