#include <iostream>

using namespace std;

    // 5. Crie uma funcao que recebe como parametros um vetor de
    // numeros inteiros vet e seu tamanho n. A funcao deve
    // trocar o maior valor do vetor com o valor da primeira
    // posicao. Se houver mais de um valor maior, considerar a
    // primeira ocorrencia. A troca deve ser realizada utilizando
    // aritmetica de ponteiros. O valor do maior elemento do
    // vetor deve ser armazenado em m.

void trocaMaior(int vet[], int n, int *m){
    int pos = 0;
    *m = *(vet);
    for(int i = 1; i < n; i++){
        if(*(vet+i) > *m){
            *m = *(vet+i);
            pos = i;
        }
    }

    int aux = *(vet);
    *(vet) = *m;
    *(vet+pos) = aux;
}


int main()
{
    int n = 10;
    int vet[n] = {27,2,27,4,5,15,7,8,9,10};
    int maior;

    trocaMaior(vet,n,&maior);

    cout << "Maior valor do vetor: " << maior << endl;

    return 0;
}
