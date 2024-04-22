/*
*   Escreva uma função recursiva que determina se um vetor de caracteres é um palíndromo.
*   A função recebe como parâmetros o tamanho e o vetor e deve retornar true ou false.
*
*   bool ehPalindromo(char a[], int n);
*/

#include <iostream>
#include <cstring>

using namespace std;

bool ehPalindromo(char a[], int n){

    if(n == 1){
        return true;
    }
    if(!ehPalindromo(a+1, n-1)){
        return false;
    }

}

int main()
{
    char palavra[50];
    cout << "Qual a palavra que você gostaria de verificar? " << endl;
    cin.getline(palavra,50);

    int n = strlen(palavra);

    if(ehPalindromo(palavra,n))
        cout << "Verdadeiro, a palavra " << palavra << " é um palindromo "<< endl;
    else
        cout << "Falso, a palavra " << palavra << " NAO e um palindromo" << endl;

    return 0;
}
