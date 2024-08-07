// Desenvolver uma função para inverter um vetor passado
// como parametro. Determine a ordem de grandeza do algoritmo.

// void inverte(int vet[], int n);

#include <iostream>

using namespace std;

void inverte(int vet[], int n)
{
    int aux;
    for(int i = 0; i < n/2; i++)
    {
        aux = vet[i];
        vet[i] = vet[n-1-i];
        vet[n-1-i] = aux;
    }
}

int main()
{
    int n;

    cout << "Insira o tamanho do vetor: " << endl;
    cin >> n;

    int vet[n];

    cout << "Preencha o vetor: " << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    inverte(vet, n);

    cout << "Vetor invertido: " << endl;

    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }
}