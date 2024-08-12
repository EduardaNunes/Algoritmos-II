/*

(5 Pontos) A intercalação  ́e uma etapa essencial do algoritmo de ordenação Merge Sort. Abaixo pode-se
ver parte do seu código. Complete a função de forma que o algoritmo intercale corretamente as seções
ordenadas do vetor vet compreendidas nos intervalos de  ́ındices [esq, meio] e [meio+1, dir].

*/

#include <iostream>

using namespace std;

void merge(int vet[], int esq, int meio, int dir)
{
    int i = esq, j = meio+1, k = 0;
    int aux[dir-esq+1];

    while(i <= meio && j <= dir){
        if(vet[i] <= vet[j]){
            aux[k] = vet[i];
            i++;
            k++;
        }else{
            aux[k] = vet[j];
            j++;
            k++;  
        }
    }

    while(i <= meio){
        aux[k] = vet[i];
        i++;
        k++;
    }

    while(j <= dir){
        aux[k] = vet[j];
        j++;
        k++;
    }

    for(i = esq; i <= dir; i++)
        vet[i] = aux[i-esq];
}

// --------------------------------------------- //

void MergeSortDivisao(int vet[], int inicio, int fim){

    int meio = (inicio+fim)/2;

    if(inicio < fim){
        MergeSortDivisao(vet, inicio, meio); // vetor da esquerda
        MergeSortDivisao(vet, meio+1, fim);  // vetor da direita
        merge(vet, inicio, meio, fim);
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