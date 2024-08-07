#include <iostream>

int* subvetor(int n, int *vet, int inicio, int fim, int *tamSub)
{
    *tamSub = fim-inicio;
    int subvetor[*tamSub];
    
    int j = 0;
    
    for(int i = inicio; i < fim; i ++){
        subvetor[j] = *(vet+i);
        j++;
    }
    
    return subvetor;
}

int main()
{

    int n, inicio, fim, tamSub;
    
    cout << "Insira o tamanho do vetor:" << endl;
    cin >> n;
    
    int vet[n];
    
    cout << "Preencha o vetor:" << endl;
    for(int i = 0; i < n; i++){
        cin >> vet[i];  
    }
    
    cout << "Insira a posição inicial do subvetor" << endl;
    cin >> inicio;
    cout << "Insira a posição final do subvetor" << endl;
    
    int subvetor[fim-inicio] = subvetor(n,&vet,inicio,fim,&tamSub);
    
    cout << "O subvetor é: " << endl;
    for(int j = 0; j < tamSub; j++){
        cout << subvetor[j] << " " << endl;
    }
    
}