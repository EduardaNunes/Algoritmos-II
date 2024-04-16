// Desenvolver uma função recursiva para calcular e retornar
// o menor valor de um vetor com n numeros inteiros.
// int menor(int vet[], int n);

#include <iostream>

using namespace std;

int menor(int vet[], int n){
    if(n == 1)
        return vet[0];  // Caso Base (resposta que sabemos)

    int menor_num = menor(vet,n-1);

    if(menor_num < vet[n-1])
        return menor_num;
    else
        return vet[n-1];
}

int main()
{
    int n;
    cout << "Insira o tamanho do vetor" << endl;
    cin >> n;

    int vet[n];
    cout << "Preencha o vetor:" << endl;

    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    cout << "Menor numero: " << menor(vet, n) << endl;

    return 0;
}
