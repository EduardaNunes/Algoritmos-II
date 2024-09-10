/**
*   3. Modifique o exercicio anterior e crie agora uma função
*   para alocar vetores de numeros reais de tamanho N de
*   forma dinamica. Protótipo:
*
*   float* alocaVetor(int n);
*/

#include <iostream>

using namespace std;

float calcMedia(int n, float vet[]){
    float soma = 0;
    for(int i = 0; i < n; i++)
        soma += *(vet+i);

    return soma/n;
}

float* alocaVetor(int n){
    float *vet = new float[n];

    cout << "Preencha o vetor: " << endl;
    for(int i = 0; i < n; i++)
        cin >> *(vet+i);

    return vet;
}


int main()
{
    int n;
    cout << "Insira o tamanho do vetor: " << endl;
    cin >> n;

    float *recebe_vet = alocaVetor(n);

    cout << "Media: " << calcMedia(n,recebe_vet) << endl;

    delete [] recebe_vet;

    return 0;
}
