/**
*   Modifique o exercicio anterior e crie uma função para
*   realizar a tarefa de calcular a média dos elementos do
*   vetor. Protótipo: 
*
*   float calcMedia(int n, float vet[]);
*/

#include <iostream>

using namespace std;

float calcMedia(int n, float vet[]){
    float soma = 0;
    for(int i = 0; i < n; i++)
        soma += *(vet+i);

    return soma/n;
}


int main()
{
    int n;
    cout << "Insira o tamanho do vetor: " << endl;
    cin >> n;

    float *vet = new float[n];

    cout << "Preencha o vetor: " << endl;

    for(int i = 0; i < n; i++){
        cin >> *(vet+i);
    }
     cout << "Media: " << calcMedia(n,vet) << endl;

     delete [] vet;

    return 0;
}
