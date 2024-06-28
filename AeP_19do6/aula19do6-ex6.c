#include <stdio.h>


int main(){

    float nota1, nota2, nota3, media;
    int codigo;

    printf("escreva o codigo do aluno: ");
    scanf("%d", &codigo);

    printf("escreva a nota da 1 avaliacao: ");
    scanf("%f", &nota1);

    printf("escreva a nota da 2 avaliacao: ");
    scanf("%f", &nota2);

    printf("escreva a nota da 3 avaliacao: ");
    scanf("%f", &nota3);



if(nota1>nota2 && nota1>nota3)
    media = (nota1*4 + nota2*3 + nota3*3)/10;

else if (nota2>nota1 && nota2>nota3)
    media = ((nota2*4) + (nota1*3) + (nota3*3))/10;

else if (nota3>nota1 && nota3>nota2)
    media = (nota3*4 + nota1*3 + nota2*3)/10;

    else
    printf("NOTAS IGUAIS NAO SAO VALIDAS"); 


printf("codigo do aluno: %d\n", codigo);
    printf("Nota 1: %.1f\n", nota1);
    printf("Nota 2: %.1f\n", nota2);
    printf("Nota 3: %.1f\n", nota3);
printf("media do aluno: %.1f ", media);




}

