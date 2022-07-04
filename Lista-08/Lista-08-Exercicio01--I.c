/*
1. Considerando que cada aluno de Programa��o I da UFES � identificado com um nome e um n�mero de
matr�cula e que cada aluno ao final da disciplina ter� a sua situa��o final definida pela m�dia (M), pela
nota da prova final (PF), que ele ir� fazer caso M < 7.0, e o n�mero de faltas (NF), fa�a o seguinte:
I. Implemente um programa em C que recebe como entrada o nome, matr�cula, M, PF e NF de
cada aluno e armazene todos esses dados em um arquivo txt. OBS: Ap�s a inser��o dos dados
de cada aluno o programa deve perguntar se deseja continuar [S/N]. A execu��o encerra-se
quando o usu�rio digitar �N�
II. Implemente outro programa em C que permite a INCLUS�O de alunos que tenham sido
�esquecidos� na execu��o do programa do item I.
III. Por fim implemente mais um programa em C que leia o arquivo utilizado nos itens I e II e gere
outros 3 arquivos textos, um com o nome dos alunos que foram aprovados, outro com o nome
dos alunos que ficaram Reprovados por Falta e o �ltimo com o nome dos alunos que ficaram
Reprovados por Nota. OBS: Os tr�s arquivos textos resultantes devem ter somente o nome dos
alunos.
Vale ressaltar que pelas normas da UFES, alunos com NF > 15 est�o diretamente Reprovados por
Falta, ou seja, n�o possuem nem o direito de fazer a Prova Final.

*/
#include <stdio.h>
#include<string.h>
#define TAM 5
typedef struct student{
 char nome [20];
 int mat;
 float media,PF,NF;
 }aluno;

 int main(){
      FILE *arq;
      arq = fopen("Lista-08-Exercicio01--I.txt","w");
      if (arq == NULL){
        printf("O ARQUIVO NAO PODE SER ABERTO \n");
        exit(1);
      }
   aluno vet[TAM];
   int i,retorno;
   char c[20];
   char s[] = "S" ;
   float resp;
   i= 0;
  do {
    printf("INSIRA SEU NOME --> ");
    scanf("%s", vet[i].nome);
     printf("\n");
    printf("INSIRA SEU NUMERO DE MATRICULA ---> ");
     scanf("%d",&vet[i].mat);
     printf("\n");
    printf("INSIRA SUA MEDIA DO SEMESTRE ---> ");
     scanf("%f",&vet[i].media);
      printf("\n");
    printf("INSIRA SEU NUMERO DE FALTAS --->");
    scanf("%f",&vet[i].NF);
      fprintf(arq,"  %s\n %d \n  %.2f \n  %.2f\n",vet[i].nome,vet[i].mat,vet[i].media,vet[i].NF);
           printf("\n");
      if(vet[i].NF>15){
        fprintf(arq,"%s ESTA REPROVADO\n",vet[i].nome);

      }

      if(vet[i].media<7&&vet[i].NF<15){
        printf("INSIRA SUA NOTA DA PROVA FINAL --->");
        scanf("%f",&vet[i].PF);
           resp = (vet[i].media+vet[i].PF)/2;


       if(resp>5) {
        fprintf(arq,"%s PARABENS VOCE FOI APROVADO \n",vet[i].nome);
       }
       else {

         fprintf(arq," %s ESTA REPROVADO\n",vet[i].nome);
           }
      }
       if(vet[i].media>=7&&vet[i].NF<15){
    fprintf(arq,"%s PARABENS VOCE FOI APROVADO \n",vet[i].nome);
   }
       printf("DESEJA CONTINUAR (S)<-->(N)\n");
       scanf("%s",&c);
      retorno =  strcmp(c,s);
     i++;

  } while( retorno== 0);

    fclose(arq);




return 0;
}

