#include <iostream>

using namespace std;

void heapify(int vet[], int pai, int n){
    int filhoEsq = 2*pai+1;
    int filhoDir = 2*pai+2;
    int novoPai = pai;

    if(filhoEsq < n && vet[filhoEsq] > vet[novoPai]){
        novoPai = filhoEsq;
    }
    if(filhoDir < n && vet[filhoDir] > vet[novoPai]){
        novoPai = filhoDir;
    }
    if(novoPai != pai){
        int aux = vet[pai];
        vet[pai] = vet[novoPai];
        vet[novoPai] = aux;
        heapify(vet, novoPai, n);
    }
}

void heapSort(int vet[], int n){
    
    // primeiro vai organizar o vetor em uma heap máxima
    // divide no meio pq só esses que tem nós filhos os outros não tem

    for(int i = n/2-1; i>=0; i--){
        int indexPai = i;
        heapify(vet, indexPai, n);
    }
    for(int i = n-1; i >=0; i--){
        int aux = vet[0];
        vet[0] = vet[i];
        vet[i] = aux;
        heapify(vet, 0, i);
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

    heapSort(vet,n); // mostra o passo a passo da ordenação

    cout << "Resultado do vetor: [ ";
    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}