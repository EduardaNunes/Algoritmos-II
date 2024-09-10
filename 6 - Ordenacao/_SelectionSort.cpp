#include <iostream>

using namespace std;

void selectionSort(int vet[], int n){
    for(int i = 0; i < n-1; i++){
        int indiceMenor = i;
        for(int j = i; j < n; j++){
            if(vet[j] < vet[indiceMenor]){
                indiceMenor = j;
            }
        }
        if(indiceMenor != i){
            int aux = vet[i];
            vet[i] = vet[indiceMenor];
            vet[indiceMenor] = aux;
        }
    }
}

/*
int* SelectionSort(int vet[], int n){        // é a mesma função de baixo, porém sem os couts mostrando o passo a passo
    for(int i = 0; i < n-1; i++){
        int indiceMenor = i;
        for(int j = i+1; j < n; j++){
            if(vet[j] < vet[indiceMenor]){
                indiceMenor = j;
            }
        }
        int aux = vet[i];
        vet[i] = vet[indiceMenor];
        vet[indiceMenor] = aux;
    }
    return vet;
}

int* SelectionSortPassoAPasso(int vet[], int n){
    for(int i = 0; i < n-1; i++){
        cout << "Passando pelo vetor pela " << i+1 << "ª vez" << endl;
        int indiceMenor = i;
        cout << "O menor número é: " << vet[indiceMenor] << endl;
        for(int j = i+1; j < n; j++){
            cout << "Passando pela posição: " << j << endl;
            if(vet[j] < vet[indiceMenor]){
                indiceMenor = j;
            }
            cout << "O menor número é: " << vet[indiceMenor] << endl;
        }
        int aux = vet[i];
        vet[i] = vet[indiceMenor];
        vet[indiceMenor] = aux;
    }
    return vet;
}

*/

int main(){
    int n;

    cout << "Insira o tamanho do vetor: " << endl;
    cin >> n;

    int vet[n];

    cout << "Preencha o vetor a ser ordenado: " << endl;
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    selectionSort(vet,n); // mostra o passo a passo da ordenação

    cout << "Resultado do vetor: [ ";
    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }
    cout << "]" << endl;
}