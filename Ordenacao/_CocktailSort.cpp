#include <iostream>

using namespace std;

void cocktailSort(int vet[],int n){

    int inicio = 0;
    int fim = n-1;
    bool troca = true;

    while(troca){
        troca = false;

        for(int i = inicio; i < fim; i++){
            if(vet[i] > vet[i+1]){
                int aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
                troca = true;
            }
            cout << vet[i] << " ";

        }
        cout << endl;
        fim--;

        if(!troca){
            break;
        }

        troca = false;

        for(int j = fim-1; j >= inicio+1; j--){
            if(vet[j] < vet[j-1]){
                int aux = vet[j];
                vet[j] = vet[j-1];
                vet[j-1] = aux;
                troca = true;
            }   
        }
        inicio++;

        if(!troca){
            break;
        }
    }
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

    cocktailSort(vet,n); // mostra o passo a passo da ordenação

    cout << "Resultado do vetor: [ ";
    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}