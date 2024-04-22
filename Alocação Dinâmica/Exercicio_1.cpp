/*
*   1. Faça um programa que leia um numero inteiro N e que
*   aloque dinamicamente um vetor com N elementos reais e
*   faça a leitura dos seus valores. Em seguida, calcule a
*   media dos valores do vetor e imprima na tela. Por fim,
*   libere a memoria alocada de forma dinâmica.
*/

#include <iostream>

using namespace std;


int main()
{
    int n;
    cout << "Insira o tamanho do vetor: " << endl;
    cin >> n;

    int *vet = new int[n];

    cout << "Preencha o vetor: " << endl;
    int soma = 0;

    for(int i = 0; i < n; i++){
        cin >> *(vet+i);
        soma += *(vet+i);
    }
     cout << "Media: " << soma/n << endl;

     delete [] vet;

    return 0;
}
