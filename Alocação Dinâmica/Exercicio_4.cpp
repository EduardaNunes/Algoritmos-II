/*
*   4. Dadas as declaraçoes e inicializaçoes abaixo:
*       int a = 1, b = 2, c = 3, *v, *px, *py, *pz;
*
*   Faça o que se pede nos itens a seguir:
*       ▶ Faça px e py apontarem, respectivamente, para a e b.
*       ▶ Incremente o valor de a.
*       ▶ Atribua o valor de c ao local apontado por py.
*       ▶ Aloque um vetor de 3 elementos inteiros e armazene o endereço resultante em v.
*       ▶ Preencha a ultima posiçao do vetor com o valor 10.
*       ▶ Faça pz apontar para a primeira posiçao do vetor.
*       ▶ Usando aritmetica de ponteiros, preencha as duas primeiras posiçoes do vetor com o valor de b e o valor
*         apontado por px, nesta ordem.
*       ▶ Imprima os conteudos das variaveis a, b e c e o conteudo do vetor.
*       ▶ Libere a memoria alocada.
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 2, c = 3, *v, *px, *py, *pz;

    px = &a;
    py = &b;

    *px += 1;

    *py = c;

    v = new int[3];

    *(v+2) = 10;

    pz = v;

    *v = b;
    *(v+1) = *px;

    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    cout << "C: " << c << endl;
    for(int i = 0; i < 3; i++)
        cout << "v[" << i << "]: " << *(v+i) << endl;


    return 0;
}


