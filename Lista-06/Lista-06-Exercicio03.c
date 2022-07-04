/*
Faça um programa que permita o cadastro de alunos de um período com as seguintes informações:
 Matrícula
 Nome
 Média final do aluno no semestre
 Notas finais de seis disciplinas
O programa deve permitir:
 O cadastro de cinco alunos;
 A listagem destes alunos;
 A listagem dos alunos com nota acima de X (X = o usuário deve informar a nota);
 A alteração das notas de um aluno.
*/

#include <stdio.h>
#define  TAM 2
#define   DF 2
int main(){
    typedef struct student{
       char nome[20];
       float matricula;
       float mediaF,N;
       float notaDF[DF];
    }aluno;

     aluno vet[TAM];
     int i,j;
    printf("DIGITE A NOTA MEDIA PARA O CALCULO\n");
            scanf("%f",&vet[i].N);

     for (i=0;i<TAM;i++){
        printf("digite o nome do aluno %d\n",i);
        scanf("%s", vet[i].nome);


        printf("digite a matricula do aluno %d\n"i);
        scanf("%f",&vet[i].matricula);

        printf("digite a media final no semestre do aluno %d\n",i);
        scanf("%f",&vet[i].mediaF);
          for(j=0;j<DF;j++){
        printf("digite a nota final de cada disciplina aluno do %d\n",i);
        scanf("%f",&vet[i].notaDF[DF]);

             }

          }




           for(i=0;i<TAM;i++){
            if(vet[i].mediaF>vet[i].N){
            printf("o aluno %s com nota acima de sua media foi ==> %.2f \n",vet[i].nome,vet[i].N,vet[i].mediaF);

            }
           }




return 0;
}
