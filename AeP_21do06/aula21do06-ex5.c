#include <stdio.h>


int main(){

    float valor1, valor2, op;


        printf("Para adicao digite (1)\n");
        printf("Para subtracao digite (2)\n");
        printf("Para divisao digite (3)\n");
        printf("Para multiplicacao digite (4)\n");

        scanf("%f", &op);

    printf("Escreva o 1 valor: ");
    scanf("%f", &valor1);

    printf("Escreva o 2 valor: ");
    scanf("%f", &valor2);

    if(op==1)
    printf("%.1f", valor1 + valor2);

    else if(op==2)
    printf("%.1f", valor1 - valor2);

    else if(op==3)
    printf("%.1f", valor1 / valor2);

    else if(op==4)
    printf("%.1f", valor1 * valor2);

    else
    printf("escolha uma operacao valida");

}

