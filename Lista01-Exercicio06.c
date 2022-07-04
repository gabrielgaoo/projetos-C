/*
Faça um programa em C que receba os lados de um losango, calcule e mostre a área
desse losango. Sabendo-se que: A = (diagonal maior * diagonal menor) /2
*/
#include <stdio.h>
int main (){
  int diagonalMaior,diagonalMenor,A;
    printf("DIGITE A DIAGONAL MAIOR DO LOSANGO\n");
    scanf("%d",&diagonalMaior);

    printf("DIGITE A DIAGONAL MENOR DO LOSANGO\n");
    scanf("%d",&diagonalMenor);

    A = (diagonalMaior*diagonalMenor)/2;
    printf("A AREA DO LOSANGO EH-->  %d",A);

 return 0;
}
