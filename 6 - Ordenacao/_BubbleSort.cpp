#include <iostream>

using namespace std;


void bubbleSort(int vet[], int n){
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            if(vet[j + 1] < vet[j]){
                int aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}

/*

void bubbleSortPassoAPasso(int vet[], int n){
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

    bubbleSort(vet,n); // mostra o passo a passo da ordenação

    cout << "Resultado do vetor: [ ";
    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }
    cout << "]" << endl;

}