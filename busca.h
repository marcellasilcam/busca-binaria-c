#ifndef BUSCA_H
#define BUSCA_H

typedef struct {
    double n; //numero de blocos
    double V, x; //volume disponivel de materia prima em cm3 e o fator em cm para o cálculo do comprimento das arestas e/ou do volume da câmara
    double volDisponivel;
    double areaBase;
    double alturaMax;
} TTeste;

double volumeDisponivelPraCadaBloco (double n, double V);
double areaDaBase (double x);
double alturaMaxima (double x);
double PesquisaBinaria (TTeste* testes, double esq, double dir);

#endif