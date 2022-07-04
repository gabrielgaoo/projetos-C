/*
Faça um programa em C que lê uma matriz A[15,5] e a escreva. Verifique, a seguir, quais os elementos
de A que estão repetidos e quantas vezes cada um está repetido. Escrever cada elemento repetido com
uma mensagem dizendo que o elemento aparece X vezes em A.

*/
#include <stdio.h>

int main(){

    {


    int m[5][2];
    int ma[10][2];
    int l,c,contL, repetiu, valor =0;

    for(l=0; l<5; l++)
    {
        for(c=0; c<2; c++)
        {
            printf("Informe um valor para linha [%d] e coluna [%d]: \n", l,c);
            scanf("%d", &m[l][c]);

            repetiu=0;
            for(contL=0; contL<10; contL++)
            {
                if(ma[contL][0] == m[l][c])
                {
                    ma[contL][1] = ma[contL][1] +1;
                    repetiu = 1;
                }

            }
            if (repetiu == 0)
            {
                ma[valor][0] = m[l][c];
                ma[valor][1] = 1;
                valor = valor + 1;
            }

        }

    }
    for(contL=0; contL<10; contL++)
    {
        if(ma[contL][1] >= 1)
        {
            printf("Elemento %d repetiu %d vezes \n", ma[contL][0], ma[contL][1]);
        }
        else
        {
            printf("Não se repetem \n");
        }
    }
}

 return 0;
}
