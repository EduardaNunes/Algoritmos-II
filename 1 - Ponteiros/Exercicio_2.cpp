#include <iostream>

using namespace std;

int main()
{
    // Dadas as declaracoes e inicializacoes abaixo:
    int a=10, b=20, c=30, v[3], *pti, *pti1, *pti2;
    pti1 = &a;
    pti2 = &b;

    // Usando pti1 e pti2, faca com que a e b recebam o valor de c.
    *pti1 = c;
    *pti2 = c;

    // Usando pti e aritmetica de ponteiros, preencha o vetor v com os valores de seus indices somados de 1.
    pti = v;
    for(int i = 0; i < 3; i++){
        *(pti + i) = i + 1;
        // Imprima os conteúdos do vetor
        cout << "Conteudo do Vetor na posicao " << i << ": " << *(pti + i) << endl;
    }
    // Imprima os conteúdos das Variáveis a, b e c
    cout << "Valor de a: " << a <<  endl;
    cout << "Valor de b: " << b <<  endl;
    cout << "Valor de c: " << c <<  endl;

    // Usando pti, atribua a variavel a o valor da primeira posicao do vetor acrescido de 99
    a = *(pti) + 99;

    // Usando pti1 e pti2, atribua a primeira posicao do vetor a soma dos valores a e b
    *(pti) = *pti1 + *pti2;

    // Atribua a segunda posicao do vetor o conteudo apontado por pti2
    *(pti + 1) = *pti2;

    // Usando aritmética de ponteiros, atribua a terceira posicao do vetor o conteudo apontado por pti1
    *(pti + 2) = *pti1;

    // Usando ponteiros, incremente o valor de b e decremente o valor da segunda posicao do vetor.
    *pti2 = *pti2 + 1;
    *(pti + 1) = *(pti + 1) - 1;

    // Novamente, imprima os conteudos do vetor e das variaveis a,b,c
    cout << "Valor de v0: " << v[0] <<  endl;
    cout << "Valor de v1: " << v[1] <<  endl;
    cout << "Valor de v2: " << v[2] <<  endl;
    cout << "Valor de a: " << a <<  endl;
    cout << "Valor de b: " << b <<  endl;
    cout << "Valor de c: " << c <<  endl;

    return 0;
}
