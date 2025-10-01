#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "busca.h"

int main(){
    int qtd;
    scanf("%d", &qtd);

    TTeste *testes = (TTeste*) malloc(qtd * sizeof(TTeste));
    for (int i = 0; i < qtd; i++)
        scanf("%lf %lf %lf", &testes[i].n, &testes[i].V, &testes[i].x);

    for (int i = 0; i < qtd; i++)
        testes[i].volDisponivel = volumeDisponivelPraCadaBloco(testes[i].n, testes[i].V);

    for (int i = 0; i < qtd; i++)
        testes[i].areaBase = areaDaBase(testes[i].x);

    for (int i = 0; i < qtd; i++)
        testes[i].alturaMax = alturaMaxima(testes[i].x);
        

    for (int i = 0; i < qtd; i++){
        double esq = 0, dir = 3 * testes[i].x;
        testes[i].alturaMax = PesquisaBinaria (&testes[i], esq, dir);

        if (testes[i].n == 0 || testes[i].V == 0 || testes[i].x == 0)
            printf("Impossivel definir a altura do corte\n");

        else if (fabs(testes[i].alturaMax - (3*testes[i].x)) < 0.0000000001)
            printf("Altura do corte igual ou maior que a camara de exposicao\n");

        else 
            printf("%.3lf\n", testes[i].alturaMax);
    }

    free(testes);
    return 0;
}