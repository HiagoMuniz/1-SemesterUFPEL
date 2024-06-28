#include <stdio.h>


int main(){

    int a;

    printf("Escreva um numero: ");
    scanf("%d", &a);

if(a%2==0)
    printf("este numero e par");

    else
    printf("este numero e impar");

if(a>0)
    printf(" e positivo!");

    else    

        if(a<0)
        printf(" e negativo!");
        else
        printf(" Seu numero é zero!");
    

}
