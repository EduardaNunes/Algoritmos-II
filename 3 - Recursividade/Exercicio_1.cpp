// (Aquecimento) Implementar uma função recursiva para
// calcular o fatorial de um número inteiro n.
// int fatorial(int n);

#include <iostream>

using namespace std;

int fatorial_rep(int n){

    int fat = 1;

    for(int i = 1; i <= n; i++){
        fat = fat * i;
    }
    return fat;
}

int fatorial_recursivo(int n){
    if(n==1){
        return 1;
    }else{
        return n*fatorial_recursivo(n-1);
    }
}

int main()
{
    int n;
    cout << "Informe um numero: " << endl;
    cin >> n;
    cout << "Fatorial com Repeticao: " << fatorial_rep(n) << endl;
    cout << "Fatorial com Recursão: " << fatorial_recursivo(n) << endl;

    return 0;
}
