// Faça um algoritmo para calcular a média dos elementos de
// um vetor de tamanho n e analise a solução implementada,
// calculando a soma das frequências.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;                                                                                                  // 1
    float soma = 0;                                                                                         // 1

    cout << "Defina o tamanho do vetor: " << endl;                                                          // 1
    cin >> n;                                                                                               // 1
    
    float vet[n];                                                                                           // 1

    cout << "Preencha o vetor: " << endl;                                                                   // 1

    for(int i = 0; i < n; i++){                                                                             // n+1
        cin >> vet[i];                                                                                      // n
        soma += vet[i];                                                                                     // n
    }

    cout << "A média dos elementos do vetor é: " << setprecision(1) << fixed << float(soma/n) << endl;      // 1
    return 0;                                                                                               // Frequência: 3n+8
}