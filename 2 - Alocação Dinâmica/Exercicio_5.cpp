/*
*   5. Crie uma funçao retorne quantos elementos de um vetor
*   vet de inteiros, de tamanho n, sao maiores do que um
*   valor val.
*
*   Essa funçao deve imprimir uma mensagem
*   conforme exemplo abaixo para todos os elementos de vet
*   que sao maiores que val.
*   
*   Em seguida, crie uma funçao para alocar um vetor dinamicamente,
*   copiar os elementos do vetor vet que sao maiores que val para esse novo
*   vetor criado e, ao final, retornar esse vetor criado de forma
*   dinamica.
*
*   Se o vetor não possuir nenhum elemento maior
*   que val, retornar NULL. Prototipos:

*   int func1(int n, int vet[], int val);
*   int* func2(int n, int vet[], int val, int tam);

*   Exemplo de saida da func1:

*   posicao 0 valor 10 endereco 0x7fff9575c050
*   posicao 2 valor 33 endereco 0x7fff9575c058
...
*/

#include <iostream>

using namespace std;

int func1(int n, int vet[], int val){
    int tam = 0;
    for(int i = 0; i < n; i++){
        if(vet[i] > val){
            cout << "posicao " << i << "  valor " << vet[i] << "  endereco " << (vet+i) << endl;
            tam++;
        }
    }
    return tam;
}

int* func2(int n, int vet[], int val, int tam){

    if(tam == 0)
        return NULL;

    int *vet2 = new int[tam];
    int j = 0;

    for(int i = 0; i < n; i++){
        if(vet[i] > val){
            *(vet2+j) = vet[i];
            j++;
        }
    }
    return vet2;
}

int main()
{
    int n;
    cout << "Determine o tamanho do vetor: " << endl;
    cin >> n;

    int val;
    cout << "Determine o valor a ser comparado: " << endl;
    cin >> val;

    int vet[n];
    cout << "Preencha o Vetor: " << endl;
    for(int i = 0; i < n; i++)
        cin >> vet[i];

    int tam = func1(n,vet,val);
    int *recebe_vet2 = func2(n,vet,val,tam);

    for(int i = 0; i < tam; i++)
        cout << "Novo vetor na posição [ " << i << " ] : " << *(recebe_vet2+i) << endl;

    return 0;
}
