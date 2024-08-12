/*

Construir uma função recursiva para calcular o fatorial de n de acordo com a equação:

n! = [1                n = 0,]
     [n × (n − 1)!     n > 0.]

Calcular a ordem de grandeza de crescimento de tempo de da função.

*/

#include <iostream>

using namespace std;

int Fat(int n){

    if(n == 0){
        return 1;
    }

    return n * Fat(n-1);

}

int main(){
    int n;

    cout << "Escreva o numero a ser calculado o fatorial: " << endl;
    cin >> n;

    cout << "Resultado: " << Fat(n) << endl; // Complexidade O(N)
}