/*
Faça um programa em C que receba os lados de um trapézio, calcule e mostre a área
desse trapézio. Sabendo-se que: A = ((base maior + base menor) * altura )/2
*/
#include <stdio.h>
int main (){
    int basemaior,basemenor,altura,A;
    printf("DIGITE A BASE MAIOR DO TRAPEZIO\n");
    scanf("%d",&basemaior);
    printf("DIGITE A BASE MENOR DO TRAPEZIO\n");
    scanf("%d",&basemenor);
    printf("DIGITE A ALTURA DO TRAPEZIO\n");
    scanf("%d",&altura);
    A = ((basemaior + basemenor)*altura)/2;
    printf("A AREA DO TRAPEZIO EH-->%d",A);

 return 0;
}
