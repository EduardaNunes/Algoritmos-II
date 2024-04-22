/*
*   3. (10 Pontos) Implemente a funçao recursiva int contaDigito(int numero, int digito) para contar
*   quantas vezes um dıgito especıfico digito aparece em um numero inteiro numero.
*
*   int contaDigito(int numero, int digito);
*/

#include <iostream>
#include <cstring>

using namespace std;

int aux_ContaDigito(int numero, int digito, int cont){
    if(numero > 10){
        if(numero%10 == digito)
            aux_ContaDigito(numero/10, digito, cont+=1);
        else
            aux_ContaDigito(numero/10, digito, cont);
    }else{
        if(numero == digito)
            return cont+=1;
        else
            return cont;
    }
}

int contaDigito(int numero, int digito){
    return aux_ContaDigito(numero,digito,0);
}

int main()
{
    int numero,digito;
    cout << "Insira o numero a ser analisado: " << endl;
    cin >> numero;

    cout << "Insira o dígito a ser procurado: " << endl;
    cin >> digito;

    cout << "O digito " << digito << " aparece no numero " << numero << " " << contaDigito(numero, digito) << " vezes." << endl;

    return 0;
}


