/*
4. Os alunos do curso de Ciência da Computação (Turma 2020), a maioria deles solteiros, decidiram
implementar um programa em C para tentar aproximar possíveis casais que possuem afinidades. A
implementação do programa foi feito em etapas, conforme descrito a seguir. Você também quer
implementar isso para sua turma e curso. Portanto, veja o que eles fizeram e faça o mesmo:
I. Foi implementado um programa em que o usuário informa o nome, sexo (M ou F), idade, cidade
e estado onde reside, para cada pessoa que irá ser cadastrada no sistema. O programa
armazena os dados em um arquivo txt. Vale ressaltar que as pessoas a serem cadastradas não
podem sobrepor as outras pessoas já cadastradas anteriormente.
II. Outro programa foi desenvolvido para que o usuário informe o seu sexo (M ou F), a sua idade,
cidade e estado onde reside. A partir disso o programa lê o cadastro de pessoas realizado pelo
programa do Item I e imprime na tela o nome das pessoas do sexo oposto ao informado, que
tenham idade no máximo (mínimo) de 3 anos a mais (menos) do que o informado e de que
sejam da mesma cidade e estado. Por exemplo, se o Talles, sexo = M, idade = 30, cidade =
Brejetuba e estado = ES, fornecer essas informações, o seu programa deve exibir o nome das
mulheres (sexo = F) com idade entre 27 e 33 anos (3 a mais e 3 a menos que ele) que também
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
