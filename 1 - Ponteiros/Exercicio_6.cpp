/*
Implementar a função void questao1(); no arquivo main.cpp com o que se pede a seguir

    - Crie uma variável inteira x com valor inicial 10 e imprima o endereço de memória de x;
    - Declare um ponteiro para inteiro p e imprima o endereço de memória de p
    - Faça com que p aponte para x e, usando o ponteiro p, imprima o endereço de memória de x e o valor de x
    - Usando o ponteiro p, modifique o valor de x para 3
    - Declare um ponteiro para ponteiro de inteiro z, faça com que z aponte para p e, usando o ponteiro z, imprima o valor de x
*/

#include <iostream>

using namespace std;

void questao1(){
    int x = 10;
    cout << "Endereço de memória de x: " << &x << endl;

    int *p;
    cout << "Endereço de memória de p: " << &p << endl;

    p = &x;
    cout << "Endereço de memória de x por p: " << p << endl;
    cout << "Valor de x por p: " << *p << endl;

    *p = 3;

    int *z = p;
    cout << "Valor de x por z: " << *z << endl;
}

int main()
{
    questao1();

    return 0;
}
