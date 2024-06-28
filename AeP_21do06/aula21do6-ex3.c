#include <stdio.h>


int main(){

    int a, b, lado4, lado3;

    printf("quantos lados este poligono regular tem? ");
    scanf("%d", &a);

    printf("Qual a medida do lado? ");
    scanf("%d", &b);

if(a<3)
printf("NAO E UM POLIGONO. ");

if(a>5)
printf("POLIGONO NAO IDENTIFICADO");

lado4 = b*b;
lado3 = b*3;

switch (a)
{
case 3:
    a = 3;
    printf("e um triangulo\n");
    printf("de perimetro: %d", lado3);
    break;

case 4:
    a = 4;
    printf("e um quadrado\n");
    printf("de area: %d", lado4);
    break;

case 5:
    a = 5;
    printf("e um poligono\n");
    break;
}

}