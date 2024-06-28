#include <stdio.h>


int main(){

    float a1, a2, media;

    printf("digite a nota da avaliacao 1: ");
    scanf("%f", &a1);

    printf("digite a nota da avaliacao 2: ");
    scanf("%f", &a2);


media = (a1 + a2)/2;


if(media<=10 && media>=7)
    printf("aluno aprovado!\n");

else if (media<7 && media>=3)
    printf("aluno em exame!\n");

else if (media>=0 && media<3)
    printf("aluno reprovado\n");
   
    else
    printf("Digite notas validas!"); 

    printf("Nota 1: %.1f\n", a1);
    printf("Nota 2: %.1f\n", a2);
printf("media do aluno: %.1f ", media);




}

