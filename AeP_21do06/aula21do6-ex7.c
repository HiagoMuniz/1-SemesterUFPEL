#include <stdio.h>


int main(){

    float n1, n2, n3;


        printf("Voce ira descubrir a soma entre os 2 maiores valores: \n");

        printf("Escreva o 1 numero: ");
        scanf("%f", &n1);

        printf("Escreva o 2 numero: ");
        scanf("%f", &n2);

        printf("Escreva o 3 numero: ");
        scanf("%f", &n3);

    if(((n1>n2) || (n1>n3)) && ((n2>n3) || (n2>n1)))

        printf("A soma dos 2 maiores numeros e: %.1f", n1 + n2);

        else if (((n2>n3) || (n2>n1)) && ((n2>n3) || (n2>n1)))

        printf("A soma dos 2 maiores numeros e: %.1f", n2 + n3);

        else

        printf("A soma dos 2 maiores numeros e: %.1f", n1 + n3);
    

}

