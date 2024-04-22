/*
*   4. (10 Pontos) Implemente a funçao recursiva int indiceMenor(int vet[], int n) que recebe como
*   parâmetro um vetor vet de elementos inteiros e seu tamanho n. A funçao deve retornar o ındice do
*   menor elemento do vetor. Se houver mais de um valor menor, considerar a primeira ocorrência.

*   int indiceMenor (int vet[], int n);
*/

#include <iostream>
#include <cstring>

using namespace std;

int aux_indiceMenor(int vet[], int n, int menor, int i){
        if(n == 1)
            return i;
        if(menor >= vet[n-1])
            aux_indiceMenor(vet,n-1,vet[n-1],n-1);
        else
            aux_indiceMenor(vet,n-1,menor,i);
}

int indiceMenor(int vet[], int n){
    return aux_indiceMenor(vet,n,vet[0],0);
}

int main()
{
    int n;
    cout << "Insira o tamanho do vetor: " << endl;
    cin >> n;

    int *vet = new int[n];

    cout << "Preencha o vetor: " << endl;
    for(int i = 0; i < n; i++)
        cin >> *(vet+i);

    cout << "Indice do menor numero: " << indiceMenor(vet,n) << endl;

    delete [] vet;


    return 0;
}


