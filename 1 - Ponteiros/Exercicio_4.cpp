#include <iostream>

using namespace std;

    // 4. Implemente uma unica função que recebe um vetor de numeros inteiros (vet) e o seu tamanho (tam) e
    //      ▶ conte o total de elementos pares
    //      ▶ conte o total de elementos impares
    //      ▶ conte o total de elementos negativos
    //      ▶ e por fim, retorne verdadeiro se existirem numeros negativos no vetor, ou retorne falso, caso contrario.


bool func(int tam, int vet[], int *par, int *imp, int *neg){
    for(int i = 0; i < tam; i++){

        if(vet[i] < 0){
            *neg += 1;
        }
        if(vet[i]%2 == 0){
            *par = *par + 1;
        }
        else{
            *imp += 1;
        }
    }

    if(*neg != 0)
        return true;
    else
        return false;
}


int main()
{
    int tam = 10;
    int vet[tam] = {1,-2,3,4,5,6,7,8,9,10};
    int par = 0,imp = 0,neg = 0;
    bool resp;
    resp = func(tam, vet, &par, &imp, &neg);

    cout << "Quantidade de Pares: " << par << endl;
    cout << "Quantidade de Impares: " << imp << endl;
    cout << "Quantidade de Negativos: " << neg << endl;

    if(resp == 1)
        cout << "Retorno da Func: Verdadeiro " << endl;
    else
        cout << "Retorno da Func: Falso " << endl;
    return 0;
}
