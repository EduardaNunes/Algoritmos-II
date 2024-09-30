#include <iostream>
#include "matriz.h"

using namespace std;

MatrizLin::MatrizLin(int nLinha, int nColuna){
    linha = nLinha;
    coluna = nColuna;

    matriz = new int[linha*coluna];
}

MatrizLin::~MatrizLin(){
    delete [] matriz;
}

void MatrizLin::imprimeMatriz(){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cout << matriz[i*coluna+j] << "\t";
        }
        cout << endl;
    }
}
