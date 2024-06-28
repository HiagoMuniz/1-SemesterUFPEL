#include <stdio.h>


int main(){

    int gremio, inter;

    printf("Quantos gols o gremio fez nesta partida?: ");
    scanf("%d", &gremio);

    printf("Quantos gols o inter fez nesta partida?: ");
    scanf("%d", &inter);


if(gremio>inter)
    printf("O gremio ganhou a partida!");

else if (inter>gremio)
    printf("O inter ganhou a partida!");
   
    else
    printf("A partida terminou empatada!"); 


}

