/*
    Por intermédio de ponteiros e alocação dinâmica em C++, faça o que se pede:

        - Crie uma função int* alocaVetor(int n); que aloca  dinamicamente e retorna um vetor com n posições para elementos inteiros.
        - Faça uma função void drive() que utilize  a função alocaVetor para criar um vetor  de 5 numeros inteiros
          Usando aritmética de ponteiros, atribua os valores [-8, 12, 7, 4, 21] ao vetor criado. Depois, usando aritmética de ponteiros
          imprima todo o conteúdo do vetor. POr fim, libere toda a memória alocada dinamicamente.
*/

#include <iostream>

using namespace std;

int* alocaVetor(int n){
    int *vet = new int[n];
    return vet;
}

void drive(){
    int *vet = alocaVetor(5);

    *(vet) = -8;
    *(vet+1) = 12;
    *(vet+2) = 7;
    *(vet+3) = 4;
    *(vet+4) = 21;

    cout << "Vetor = [ ";

    for(int i = 0; i < 5; i++)
        cout <<  *(vet+i) << ", ";

    cout <<  "] " << endl;

    delete [] vet;
}

int main()
{
    drive();

    return 0;
}
