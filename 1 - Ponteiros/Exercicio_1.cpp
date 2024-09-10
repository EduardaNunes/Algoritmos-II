#include <iostream>

using namespace std;

int main()
{
    // Declare um ponteiro inteiro pt
    int *pt;

    // Imprima o endereco de pt
    cout << "Endereco de pt: " << &pt << endl;

    // Crie Uma Variavel Inteira x
    int x;

    // Leia um Valor Para x
    cout << "Insira um valor para x" << endl;
    cin >> x;

    // Faca com que pt aponte para x
    pt = &x;

    // Imprima o Conteudo da Variavel pt
    cout << "Conteudo da Variavel pt: " << *pt << endl;

    // Imprima o Endereco de x;
    cout << "Endereco da variavel x: " << pt << endl;

    // Usando apenas o ponteiro pt multiplique x por 10 e altere seu valor
    *pt = *pt * 10;

    //Imprima o Conteudo apontado por pt
    cout << "Novo valor de x * 10: " << *pt << endl;

    // Some 10 a Variavel pt.
    pt += 10;

    // Imprima seu conteúdo novamente. Qual o significado dessa saida?
    // Nesse caso mudamos o local que o ponteiro está apontando, ou seja, parou de apontar para x
    // e passou a apontar para outra coisa qualquer 10 espaços de memória a cima
    cout << "Novo Conteudo de pt: " << pt << endl;
    cout << "Novo Valor apontado por pt: " << *pt << endl;
    cout << "Endereço de x: " << " &x: " << &x << endl;
    cout << "Valor de x: " << x << endl;

    return 0;
}
