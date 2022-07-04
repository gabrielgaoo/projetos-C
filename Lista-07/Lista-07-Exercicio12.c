/*
12. Faça uma função em C que leia um vetor A de 30 elementos float e, usando o procedimento METADE
(criado na questão anterior), divida todos seus elementos pela metade.
*/
#include <stdio.h>
#define TAM 5
   void METADE(float vet[],float qtd);
  int main(){
    float VET[TAM],resp[TAM] ;
    int i;
    for (i=0;i<TAM;i++){
        printf("INSIRA UM VALOR FLOAT \n");
        scanf("%f",&VET[i]);
    }
      METADE(VET,TAM);

return 0;
}
  void  METADE(float vet[],float qtd){
     int  i;
     float aux[TAM];
     for(i=0;i<qtd;i++){
      aux[i] = vet[i]/2;
   }
      for(i=0;i<TAM;i++){
      printf("%.2f\n",aux[i]);
   }


}

