/*
    A função e^x pode ser calculada usando-se n+1 termos da série:
        expo(x,n) = 1 + (x^1)/1! + (x^2)/2! + ... + (x^n)/n!
    Faça o que se pede:
        - Implementar uma função recursiva int fatorial(int n); para calcular n!
        - Implementar uma função recursiva float potencia(float x, int n); para calcular x^n
        - A função recursiva float auxExpo(floatx, int n) que, utilizando as funções anteriores, calcule expo(x,n), de acordo com a serie dada
*/

#include <iostream>

using namespace std;

int fatorial(int n){
    if(n == 1)
        return 1;
    else
        return n * fatorial(n-1);
}

float potencia(float x, int n){
    if(n == 1)
        return x;
    else
        return x * potencia(x,n-1);
}

float expo(float x, int n){
    if(n == 0)
        return 1;
    else
        return (potencia(x,n)/fatorial(n) + expo(x,n-1));
}

int main()
{
    int n;
    float x;

    cout << "Insira o valor de n: " << endl;
    cin >> n;

    cout << "Insira o valor de x: " << endl;
    cin >> x;

    cout << "Fatorial de " << n << " = " << fatorial(n) << endl;
    cout << "Potencia de " << x << " elevado a " << n << " = " << potencia(x,n) << endl;
    cout << "Resultado Expo = " << expo(x,n) << endl;
    
    cout << "TESTES PARA A QUESTAO 3" << endl;
    cout << "Resultado esperado: "<<1 << endl;
    cout << "Resultado obtido:   ";
    cout<<expo(0.0, 9)<<endl;

    cout << "Resultado esperado: "<<2.5 << endl;
    cout << "Resultado obtido:   ";
    cout<<expo(1.0, 2)<<endl;

    cout << "Resultado esperado: "<<5 << endl;
    cout << "Resultado obtido:   ";
    cout<<expo(2.0, 2)<<endl;
    
    return 0;
}
