#include <iostream>

using namespace std;

int* bubbleSort(int vet[], int n){     // é a mesma função de baixo, porém sem os couts mostrando o passo a passo
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            if(vet[j] > vet[j+1]){
                int aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
    return vet;
}

int* bubbleSortPassoAPasso(int vet[], int n){
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            cout << "Comparando a posição " << j << " com " << j+1 << endl;
            if(vet[j] > vet[j+1]){
                int aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
                cout << "Troca" << endl;
            }else{
                cout << "Não Troca" << endl;
            }
            cout << "[ ";
            for(int i = 0; i < n; i++){
                cout << vet[i] << " ";
            }
            cout << "]" << endl;
        }
    }
    return vet;
}

int main(){
    int n;

    cout << "Insira o tamanho do vetor: " << endl;
    cin >> n;

    int vet[n];

    cout << "Preencha o vetor a ser ordenado: " << endl;
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    int *vetOrganizado = bubbleSortPassoAPasso(vet,n); // mostra o passo a passo da ordenação

    cout << "Resultado do vetor: [ ";
    for(int i = 0; i < n; i++){
        cout << *(vetOrganizado+i) << " ";
    }
    cout << "]" << endl;

}