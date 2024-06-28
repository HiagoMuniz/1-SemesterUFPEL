#include <stdio.h>


int main(){

    float nota;

    printf("escreva a nota: ");
    scanf("%f", &nota);

if(nota>=0 && nota<=5)
    printf("Conceito D");

    else    

        if(nota>5 && nota<=7)
        printf("conceito C");
        
        else

            if(nota>7 && nota<=9)
            printf("conceito B");

            else
                if(nota>9 && nota<=10)
                printf("conceito A");

                else
                printf("NOTA INVALIDA, ESCREVA UMA NOTA ENTRE 0 E 10");

}
