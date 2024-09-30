#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "matrizListra.h"

using namespace std;

// ----------------------------------------------------------------------------
//Q3

MatrizListra::MatrizListra(int m, int n)
{
    // Implemente aqui sua solução!
    // Se necessário, remova o código abaixo.
    nl = m;
    nc = n;

    vet = new int[(nc/2)*nl];
}

MatrizListra::~MatrizListra()
{
    // Implemente aqui sua solução!

    delete [] vet;
}

bool MatrizListra::ehQuadrada()
{
    // Implemente aqui sua solução!
    // Se necessário, remova o código abaixo.

    if(nl == nc)return true;
    else return false;

}

int MatrizListra::detInd(int i, int j)
{
    if(i >= 0 && i <= nl && j >= 0 && j <= nc){
        if(j%2 == 0){
            return -2;
        }else{
            int k = (nl * (j/2)) + i;
        }
    }else{
        return -1;
    }
}

int MatrizListra::get(int i, int j)
{
    // Implemente aqui sua solução!
    // Se necessário, remova o código abaixo.
    int k = detInd(i,j);

    if(k == -1){
        cout << "Posicao Invalida" << endl;
        exit(1);
    }else{
        if(k == -2){
            return 0;
        }else{
            return vet[k];
        }
    }

}

void MatrizListra::set(int i, int j, int val)
{
    // Implemente aqui sua solução!]
    int k = detInd(i,j);

    if(k == -1){
        cout << "Posicao Invalida" << endl;
    }else if(k == -2 && val != 0){
        cout << "Valor Invalido" << endl;
    }else{
        vet[k] = val;
    }

}

MatrizListra *MatrizListra::criaCopia()
{
    // Implemente aqui sua solução!
    // Se necessário, remova o código abaixo.
    MatrizListra* novaMatriz = new MatrizListra(nl, nc);
    int tam = (nc/2)*nl;

    for(int i = 0; i < tam; i++){
        novaMatriz->vet[i] = vet[i];
    }
    return novaMatriz;
}

//-Q3
// ----------------------------------------------------------------------------

void MatrizListra::imprime()
{
    cout << right;
    for (int i = 0; i < nl; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            cout << setw(3) << get(i, j) << " ";
        }
        cout << endl;
    }
}
