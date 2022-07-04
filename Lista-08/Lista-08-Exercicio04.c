/*
4. Os alunos do curso de Ci�ncia da Computa��o (Turma 2020), a maioria deles solteiros, decidiram
implementar um programa em C para tentar aproximar poss�veis casais que possuem afinidades. A
implementa��o do programa foi feito em etapas, conforme descrito a seguir. Voc� tamb�m quer
implementar isso para sua turma e curso. Portanto, veja o que eles fizeram e fa�a o mesmo:
I. Foi implementado um programa em que o usu�rio informa o nome, sexo (M ou F), idade, cidade
e estado onde reside, para cada pessoa que ir� ser cadastrada no sistema. O programa
armazena os dados em um arquivo txt. Vale ressaltar que as pessoas a serem cadastradas n�o
podem sobrepor as outras pessoas j� cadastradas anteriormente.
II. Outro programa foi desenvolvido para que o usu�rio informe o seu sexo (M ou F), a sua idade,
cidade e estado onde reside. A partir disso o programa l� o cadastro de pessoas realizado pelo
programa do Item I e imprime na tela o nome das pessoas do sexo oposto ao informado, que
tenham idade no m�ximo (m�nimo) de 3 anos a mais (menos) do que o informado e de que
sejam da mesma cidade e estado. Por exemplo, se o Talles, sexo = M, idade = 30, cidade =
Brejetuba e estado = ES, fornecer essas informa��es, o seu programa deve exibir o nome das
mulheres (sexo = F) com idade entre 27 e 33 anos (3 a mais e 3 a menos que ele) que tamb�m
residam em Brejetuba/ES.
*/
#include <stdio.h>
  int main(){

    FILE *arq;
    arq = fopen("Lista-08-Exercicio04.txt","a");
      if(arq == NULL){
        printf("ERRO!\n");
       exit(1);
      }

    char nome[20];
    char sexo[2];
    int idade;
    char cidade[20];
    char estado[20];

        scanf("%s", nome);
        scanf("%s", sexo);
        scanf("%d",&idade);
        scanf("%s", cidade);
        scanf("%s", estado);
   fprintf(arq," %s \n %s \n %d \n %s \n %s \n",nome,sexo,idade,cidade,estado);
   fclose(arq);


  return 0;
  }
