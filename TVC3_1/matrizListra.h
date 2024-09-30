#ifndef MATRIZ_LISTRA_H
#define MATRIZ_LISTRA_H

class MatrizListra
{
public:
    MatrizListra(int m, int n);
    ~MatrizListra();
    bool ehQuadrada();
    int get(int i, int j);
    void set(int i, int j, int val);
    MatrizListra *criaCopia();
    void imprime();

private:
    int detInd(int i, int j);
    int nl;   // Número de linhas
    int nc;   // Número de colunas

    int *vet; // Vetor de elementos não nulos
};

#endif // MATRIZ_LISTRA_H
