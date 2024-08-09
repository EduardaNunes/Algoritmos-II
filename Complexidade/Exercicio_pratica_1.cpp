/*

Desenvolver uma função ̃iterativa para calcular o n-ésimo
termo da serie de Fibonacci. Analise a complexidade do
algoritmo e compare-o com a versao recursiva vista em
sala de aula.

int fibonacci(int n);

*/

#include <iostream>

using namespace std;

int fib(int n)                         // T(n) = 4 n - 7
{
    int ultimo, penultimo;             // 1
    ultimo = penultimo = 1;            // 1
    int atual;                         // 1

    if(n == 1 || n == 2)               // 1
    {
        atual = 1;
    }

    for(int i = 3; i <=n; i++)         // n-2
    {
        atual = ultimo + penultimo;    // n-3
        penultimo = ultimo;            // n-3
        ultimo = atual;                // n-3
    }

    return atual;
}

int main()
{
    int n;

    cout << "Determine qual dos termos de fibonacci voce gostaria de receber:" << endl;
    cin >> n;
    cout << "O " << n << " numero e: " << fib(n) << endl;
}
