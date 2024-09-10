#include <iostream>

using namespace std;

int main()
{
    // 2. Faca um programa que realize as seguintes operações:
    //      ▶ Declare uma variável inteira val.
    //      ▶ Declare um ponteiro para inteiro ptr.
    //      ▶ Faça com que ptr aponte para val.
    //      ▶ Imprima o valor de val e o endereço de memória dela. 
    //      ▶ Imprima o valor de ptr e o valor apontado por ele.
    //      ▶ Modifique o valor de val através do ponteiro ptr.
    //      ▶ Crie um novo ponteiro ptr2 e atribua a ele o mesmo valor de ptr.
    //      ▶ Imprima o valor de ptr2 e o valor apontado por ele.
    //      ▶ Modifique o valor apontado por ptr2.
    //      ▶ Imprima o valor de val.

    int val = 10;
    int *ptr;

    ptr = &val;

    cout << "Valor de val: " << val << endl;
    cout << "Endereço de Memória de val: " << &val << endl;
    cout << "Valor de ptr: " << ptr << endl;
    cout << "Valor apontado por ptr: " << *ptr << endl;

    *ptr += 10;

    int *ptr2;
    ptr2 = ptr;

    cout << "Valor de ptr2: " << ptr2 << endl;
    cout << "Valor apontado por ptr2: " << *ptr2 << endl;

    *ptr2 += 10;

    cout << "Novo valor de val: " << val << endl;

    return 0;
}
