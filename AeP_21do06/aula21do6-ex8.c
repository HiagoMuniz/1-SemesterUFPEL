#include <stdio.h>


int main(){

    int x, y;


        printf("Voce descubrira em qual quadrante esta o ponto de cordenadas(x,y) no plano cartesiano: \n");

        printf("Qual o valor de x? ");
        scanf("%d", &x);

        printf("Qual o valor de y? ");
        scanf("%d", &y);


    if((x==0) || (y==0))

        printf("Não pertence a nenhum quadrante!");

        else if (x>0 && y>0)

            printf("O ponto esta no 1 quadrante!");

            else if (x<0 && y>0)
            {
                printf("O ponto esta no 2 quadrante!");
            }

                else if (x<0 && y<0)
                {
                printf("O ponto esta no 3 quadrante!");
                }
        else
        
        printf("O ponto esta no 4 quadrante!");    

}

