#include <iostream>

using namespace std;

int QuickSortParticionamento(int vet[], int inicio, int fim){
    int pivoIndex = (inicio+fim)/2;
    int aux = vet[pivoIndex];
    vet[pivoIndex] = vet[fim];
    vet[fim] = aux;
    pivoIndex = fim;

    int i = inicio-1;
    for(int j = inicio; j <= fim-1; j++){
        if(vet[j] < vet[pivoIndex]){
            i++;
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
        }
        cout << vet[j] << " ";
    }
    cout << endl;
    i++;
    aux = vet[i];
    vet[i] = vet[pivoIndex];
    vet[pivoIndex] = aux;

    return i;
}

void QuickSort(int vet[], int inicio, int fim){

    if(inicio < fim){
        int pivoIndex = QuickSortParticionamento(vet, inicio, fim);
        QuickSortParticionamento(vet, inicio, pivoIndex - 1);
        QuickSortParticionamento(vet, pivoIndex + 1, fim);
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

    QuickSort(vet,0 ,n-1); // mostra o passo a passo da ordenação

    cout << "Resultado do vetor: [ ";
    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }
    cout << "]" << endl;  
}