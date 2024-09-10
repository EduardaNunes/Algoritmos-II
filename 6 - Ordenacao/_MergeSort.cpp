#include <iostream>

using namespace std;

void MergeSortIntercalacao(int vet[], int inicio, int meio, int fim){
    
    int vetAux[(fim-inicio)+1];
    int i = inicio;
    int j = meio + 1;
    int k = 0;

    while(i <= meio && j <= fim){
        if(vet[i] < vet[j]){
            vetAux[k] = vet[i];
            k++;
            i++;
        }else{
            vetAux[k] = vet[j];
            k++;
            j++;     
        }
    }
    while(i <= meio){
        vetAux[k] = vet[i];
        k++;
        i++;
    }
    while(j <= fim){
        vetAux[k] = vet[j];
        k++;
        j++;
    }

    for(int a = inicio; a <= fim; a++){
        vet[a] = vetAux[a-inicio];
    }
}

void MergeSortDivisao(int vet[], int inicio, int fim){

    int meio = (inicio+fim)/2;

    if(inicio < fim){
        MergeSortDivisao(vet, inicio, meio); // vetor da esquerda
        MergeSortDivisao(vet, meio+1, fim);  // vetor da direita
        MergeSortIntercalacao(vet, inicio, meio, fim);
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

    MergeSortDivisao(vet,0 ,n-1); // mostra o passo a passo da ordenação

    cout << "Resultado do vetor: [ ";
    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }
    cout << "]" << endl;   
}