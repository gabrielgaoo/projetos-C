/*
Faça um programa em C que a partir de uma matriz com 5 linhas e 10 colunas de números inteiros deve
armazenar e imprimir uma outra matriz com 5 linhas e 3 colunas, que armazenará o maior, o menor e a
soma dos elementos de cada linha.

*/
#include <stdio.h>
#define LIN 5
#define COL 10
int main(){
   int maior,menor,soma,matriz[LIN][COL],i,j,res[3][5];
   for(i=0;i<LIN;i++){
    for(j=0;j<COL;j++){
        printf("preencha a matriz %d<***>%d\n",i,j);
        scanf("%d",&matriz[i][j]);
    }
   }
   for(i=0;i<LIN;i++){
    for(j=0;j<COL;j++){
          soma += matriz[i][j];

     }
   }
   maior = matriz[0][0];
   menor = matriz[0][0];
    for(i=0;i<LIN;i++){
     for(j=0;j<COL;j++){

        if(matriz[i][j]>maior){
            maior = matriz[i][j];

        }
        if(matriz[i][j]<menor){
           menor = matriz[i][j];
        }
    }
   }

  printf("MAIOR!***%d\n",maior);
  printf("MENOR!***%d\n",menor);
  printf("SOMA!***%d\n",soma);



   for(i=0;i<3;i++){
    for(j=0;j<5;j++){
        res[i][j] = maior;
        res[i][j] = menor;
        res[i][j] = soma;

     }
    }
     for(i=0;i<3;i++){
    for(j=0;j<5;j++){
    printf("%d\n"),res[i][j];
     }
    }








return 0;
}
/*#include <stdio.h>

#define TAM 3

int main(){

   int idades[TAM], i, maior, menor;
   float soma, media;

   for(i = 0; i < TAM; i++){
     printf("Digite a idade do aluno %d\n", i);
     scanf("%d", &idades[i]);
   }

   printf("\nIMPRESSÃO\n");
   for(i = 0; i < TAM; i++){
     printf("%d\n", idades[i]);
   }

   soma = 0;
   for(i = 0; i < TAM; i++){
     soma = soma + idades[i];
   }

   media = soma/TAM;
   printf("A media de idades eh %.2f\n", media);

   maior = idades[0];
   menor = idades[0];
   for(i = 1; i < TAM; i++){
      if (idades[i] > maior){
         maior = idades[i];
      }
      if (idades[i] < menor){
         menor = idades[i];
      }
   }

   printf("Maior idade %d\n", maior);
   printf("Menor idade %d\n", menor);

   return 0;
}*/
