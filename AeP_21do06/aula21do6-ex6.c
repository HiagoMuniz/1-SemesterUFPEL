#include <stdio.h>


int main(){

    float n1, n2, n3;


        printf("Você ira descubirir o maior numero entre quaisquer 3 numeros: \n");

        printf("Escreva o 1 numero: ");
        scanf("%f", &n1);

        printf("Escreva o 2 numero: ");
        scanf("%f", &n2);

        printf("Escreva o 3 numero: ");
        scanf("%f", &n3);

    if(n1>n2 && n1>n3)

    printf("O seu numero maior e: %.1f (primeiro numero)", n1);

        else if (n2>n3)
        {
            printf("O seu numero maior e: %.1f (segundo numero)", n2);

        }

        else
        printf("O seu numero maior e: %.1f (terceiro numero)", n3);

}

