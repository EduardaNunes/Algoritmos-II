/*

Modifique o algoritmo Bubble sort para que o processo de
ordenação seja encerrado antecipadamente caso o vetor
fique ordenado ao fim de uma passagem.

*/

#include <iostream>

using namespace std;

int* bubbleSort(int vet[], int n){     // é a mesma função de baixo, porém sem os couts mostrando o passo a passo
    for(int i = n-1; i >= 0; i--){
        bool trocou = false;           // adiciona uma verificação de controle de troca
        for(int j = 0; j < i; j++){
            if(vet[j] > vet[j+1]){
                int aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
                trocou = true;         // se fizer uma troca seta como true
            }
        }
        if(!trocou){                   // se não fez nenhuma troca nessa passada, então está ordenado e pode sair do loop
            break;
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

    int *vetOrganizado = bubbleSort(vet,n); // mostra o passo a passo da ordenação

    cout << "Resultado do vetor: [ ";
    for(int i = 0; i < n; i++){
        cout << *(vetOrganizado+i) << " ";
    }
    cout << "]" << endl;

}