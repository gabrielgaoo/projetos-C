/*
Supondo que todo carro tem um modelo, marca, ano, cor e preço. Faça um programa que leia as
informações de 10 carros que uma concessionária possui para revenda e imprime na tela o modelo,
marca, cor e o ano dos carros que possuem preço abaixo de R$ 20.000,00.
*/

#include <stdio.h>
#define TAM 5
typedef struct car{
       char modelo[20];
       char  cor[20];
       float ano[TAM];
       float preco[TAM];

}carro;

int main(){

    carro vet[TAM];
     int i;
        for (i=0;i<TAM;i++){
            printf("informe o modelo do carro que deseja\n");
            scanf("%s",&vet[i].modelo);

        for (i=0;i<TAM;i++){
             printf("informe a cor do carro que deseja\n");
               scanf("%s",&vet[i].cor);


         for (i=0;i<TAM;i++){
         printf("informe o ano do carro que deseja\n");
          scanf("%f",&vet[i].ano[i]);



           for (i=0;i<TAM;i++){
            printf("informe o preco do carro que deseja\n");
          scanf("%f",&vet[i].preco[i]);
                     if(vet[i].preco[i]<20000){
                        printf("o carro %s da cor %s e o ano %.f esta no preco de %.f",vet[i].modelo,vet[i].cor,vet[i].ano[i],vet[i].preco[i]);
                     }
             }
           }
        }
     }












 return 0;
}
