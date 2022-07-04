/*
Uma turma de alunos do curso de Medicina composta por apenas 10 alunos, está cursando 5 disciplinas.
Faça um programa que armazene o nome de cada aluno, o nome de cada disciplina, além de armazenar
a média (antes da Prova Final) em cada uma das 5 disciplinas dos 10 alunos e também a nota obtida na
prova final (se o aluno não ficou de prova final na disciplina será preenchido com 0). A partir disso exiba
o nome dos alunos reprovados e o nome das disciplinas reprovadas.


*/
#include <stdio.h>
#define TAM 1
#define ND  1

  int main(){

typedef struct student{
    char dicipli [ND][20];
    char nome[20];
    float notas[ND];
    float notasPF[ND];

    }aluno;
    aluno vet[TAM];
    int i,j;
    float media=0;
    for (i=0;i<TAM;i++){
        printf("isira o nome do aluno-->%d \n",i);
        scanf("%s", vet[i].nome);
  for(j=0;j<ND;j++){
        printf("insira o nome da disciplina %d do aluno %d \n",j,i);
         scanf("%s", vet[i].dicipli[j]);
        printf("informe a nota na disciplina %d do aluno %d\n",j,i);
         scanf("%f",&vet[i].notas[j]);
            if(vet[i].notas[j]<7){
                printf("informe a nota da prova final da disciplina %d do aluno %d \n",j,i);
                scanf("%f",&vet[i].notasPF[j]);
            }
            else {
                vet[i].notasPF[j] = 0;

        }
    }
}
           for(i=0;i<TAM;i++){
               for(j=0;j<ND;j++){
                      media = (vet[i].notas[j]+vet[i].notasPF[j])/2;
                      if(media<5){
                        printf("%s ficou reprovado na disciplina %s \n",vet[i].nome,vet[i].dicipli[j]);

                      }
               }
           }


  return 0;
  }
