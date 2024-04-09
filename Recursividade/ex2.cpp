// Desenvolver uma função recursiva que, dados três valores
// inteiros como parâmetros a, b e inc, imprime o intervalo
// fechado de a até b com incremento inc.
// void imprimeIntervalo(int a, int b, int inc);
// Exemplo: imprimeIntervalo(1,8,2);
// Saída: 1 3 5 7

#include <iostream>

using namespace std;

void imprimeIntervalo(int a, int b, int inc){
    if((a + inc) == b){
        cout << b << " ";
    }else if((a + inc) > b){
        cout << a << " ";
    }else{
        cout << a << " ";
        imprimeIntervalo(a+inc, b, inc);
    }
}

int main()
{
    int a, b, inc;
    cout << "Informe o início do intervalo: " << endl;
    cin >> a;
    cout << "Informe o fim do intervalo: " << endl;
    cin >> b;
    cout << "Informe o incremento: " << endl;
    cin >> inc;

    imprimeIntervalo(a,b,inc);

    return 0;
}
