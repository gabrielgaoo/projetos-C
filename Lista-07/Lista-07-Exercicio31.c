/*
31. Fa�a uma fun��o em C que determine se um caractere, recebido como par�metro, � ou n�o uma letra
do alfabeto. A fun��o deve retornar 1 caso positivo e 0 em caso contr�rio. Escreva tamb�m um
algoritmo para testar tal fun��o.

*/

#include<stdio.h>
int checkletra(int caractere);
//fun��o que determina se um caractere recebido � ou n�o uma letra do alfabeto

int main(){
    char letra;
    int resp;
    printf("Digite um caractere: ");
    scanf(" %c",&letra);
    resp = checkletra(letra);
    printf("%d",resp);


return 0;
}
int checkletra(int caractere){
    if(caractere>=65 && caractere<=90){
        return 1;
    }
    else if(caractere>=97 && caractere<=122){
        return 1;
    }
    else{
        return 0;
    }
}
