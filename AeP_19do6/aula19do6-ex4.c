#include <stdio.h>


int main(){

    int a, b, c;

    printf("escreva o 1 lado do triangulo: ");
    scanf("%d", &a);

    printf("escreva o 2 lado do triangulo: ");
    scanf("%d", &b);

    printf("escreva o 3 lado do triangulo: ");
    scanf("%d", &c);



if(!(a<(b+c)))

    printf("Nao podem ser lados de um triangulo");


else{

    if(!(b<(c+a)))
    printf("Nao podem ser lados de um triangulo");

else{

    if(!(c<(a+b)))
    printf("Nao podem ser lados de um triangulo");

else

    printf("Podem ser lados de um triangulo!" );
}}



}
