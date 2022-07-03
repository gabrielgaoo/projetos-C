/*Faça um programa em C que receba o valor do salário mínimo e o valor do salário
de um funcionário, calcule e mostre a quantidade de salários mínimos que ganha esse
funcionário.*/
#include <stdio.h>
#define salarioMinimo 1192.40
int main (){
float salariof,resultado;
printf("DIGITE SEU SALARIO\n");
scanf("%f",&salariof);
   resultado=salariof/salarioMinimo;
printf("VOCE RECEBE %2.f SALARIOS MINIMOS",resultado);







 return 0;
}
