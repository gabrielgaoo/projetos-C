#include <stdio.h>
int main(){
  int AnoNascimento,AnoAtual,anos,meses,dias,semanas;
  printf("DIGITE SUA DATA DE NASCIMENTO\n");
  scanf("%d",&AnoNascimento);
  printf("DIGITE O ANO ATUAL\n");
  scanf("%d",&AnoAtual);
  anos = AnoAtual-AnoNascimento;
  meses= anos*12;
  dias= anos*365;
  semanas=anos*52;
  printf("SUA IDADE EM ANOS EH %d\n",anos);
  printf("SUA IDADE EM MESES EH %d\n",meses);
  printf("SUA IDADE EM DIAS EH %d\n",dias);
  printf("SUA IDADE EM SEMANAS EH %d\n",semanas);









 return 0;
}
