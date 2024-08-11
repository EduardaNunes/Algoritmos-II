#include <iostream>

using namespace std;

int* InsertionSortV2(int vet[], int n){        // Segunda tentativa vendo como q era pra ser feito.
    for(int j = 1; j < n; j++){
        int i = j;
        while(vet[i] < vet[i-1] && i > 0){
            int aux = vet[i];
            vet[i] = vet[i-1];
            vet[i-1] = aux;

            i--;        
        }
    }
    return vet;
}

int* InsertionSortV1(int vet[], int n){        // primeira tentativa. Funciona mas ele termina de andar pelo vetor desnecessariamente
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j > 0; j--){
            if(vet[j] < vet[j-1]){
                int aux = vet[j];
                vet[j] = vet[j-1];
                vet[j-1] = aux;
            }
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

    int *vetOrganizado = InsertionSortV2(vet,n); // mostra o passo a passo da ordenação

    cout << "Resultado do vetor: [ ";
    for(int i = 0; i < n; i++){
        cout << *(vetOrganizado+i) << " ";
    }
    cout << "]" << endl;
}