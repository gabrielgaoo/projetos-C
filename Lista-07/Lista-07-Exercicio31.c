/*
31. Faça uma função em C que determine se um caractere, recebido como parâmetro, é ou não uma letra
do alfabeto. A função deve retornar 1 caso positivo e 0 em caso contrário. Escreva também um
algoritmo para testar tal função.

*/

#include<stdio.h>
int checkletra(int caractere);
//função que determina se um caractere recebido é ou não uma letra do alfabeto

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
