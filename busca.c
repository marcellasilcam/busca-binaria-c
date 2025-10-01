#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "busca.h"

double volumeDisponivelPraCadaBloco (double n, double V){
    return (V / n); 
}

double areaDaBase (double x){
    int a = x, b = 2 * x;
    return (a * b);
}

double alturaMaxima (double x){
    return (3 * x);
}

double PesquisaBinaria (TTeste* testes, double esq, double dir) {
    double meio = (esq + dir) / 2;
    testes->volDisponivel = (testes->x * (testes->x * 2)) * meio * testes->n;
    
    if (fabs(esq-dir) < 0.0000000001)
        return meio;

    else if (fabs(testes->volDisponivel - testes->V) < 0.0000000001)
        return -1;

    else if (testes->volDisponivel > testes->V)
        return PesquisaBinaria
    (testes, esq, meio);

    else 
        return PesquisaBinaria
    (testes, meio, dir);
}