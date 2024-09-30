#include <iostream>

using namespace std;

class MatrizLin{

    public:
        MatrizLin(int nLinha, int nColuna);
        ~MatrizLin();
        void setMatriz(int setLinha, int setColuna, int setVal);
        void imprimeMatriz();

    private:
        int linha;
        int coluna;
        int *matriz;
};