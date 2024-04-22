#include <iostream>
#include <string.h>
#include <math.h>
/// NOME:
/// MATR�CULA:

using namespace std;

// ----------------------------------------------------------------------------------------------------
//Q1

void questao1()
{
// Implemente aqui sua solu�c~ao para as tarefas da quest~ao 1.
// Letra A
    int x = 10;
    cout << "Endereco de x: " << &x << endl;

// Letra B
    int *p = NULL;
    cout << "Endereco de p: " << &p << endl;

// Letra C
    p = &x;
    cout << "Endereco de x acessado por p: " << p << endl;
    cout << "Valor de x acessado por p: " << *p << endl;

// Letra D

    *p = 3;

// Letra E
    int **z;
    z = &p;
    cout << "Valor de x acessado por z: " << **z << endl;
}
//-Q1



// ----------------------------------------------------------------------------------------------------
//Q2
int* alocaVetor (int n)
{
    int *res = new int [n];
    return res;
}

void drive ()
{
    const unsigned short n = 5;
    int *vet = alocaVetor (n);

    *(vet+0) = -8;
    *(vet+1) = 12;
    *(vet+2) = 7;
    *(vet+3) = 4;
    *(vet+4) = 21;

    cout << "O vetor lido eh: ";
    for (int i = 0; i < n; i++)
        cout << vet[i] << " ";
    cout << endl;

    delete [] vet;
}

//-Q2


// ----------------------------------------------------------------------------------------------------
//Q3

int potencia(int x, int n)
{
    if(n==0)
        return 1;
    else
        return x * potencia(x, n-1);
}

int fatorial(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n * fatorial(n-1);
}


float expo(float x, int n)
{
    if(n == 0)
        return 1.0;
    else
        return (float)potencia(x, n)/fatorial(n) + expo(x, n-1);
}

//-Q3

// ----------------------------------------------------------------------------------------------------
//Q4

void AuxPalindromoInverte(char v1[], int n, int i, bool *pal)
{
    if(i<n)
    {
        AuxPalindromoInverte(v1, n-1, i+1, pal);

        if(v1[i] != v1[n-1])
            *pal = false;
    }
}

bool palindromo(char v1[], int n)
{
    bool palindromo = true;

    AuxPalindromoInverte(v1, n, 0, &palindromo);

    return palindromo;
}
//-Q4



// ----------------------------------------------------------------------------------------------------
int main()
{
     //TESTES PARA A QUESTAO 1 ------------------------------------------------
        cout << "TESTES PARA A QUESTAO 1" << endl;
        questao1();
        cout<<endl<<endl;
        // TESTES PARA A QUESTAO 2 ------------------------------------------------
        cout << "TESTES PARA A QUESTAO 2" << endl;
        cout << "Resultado esperado: -8 12 7 4 21"<<endl;
        drive();

    // TESTES PARA A QUESTAO 3 ------------------------------------------------
    cout << "TESTES PARA A QUESTAO 3" << endl;
    cout << "Resultado esperado: "<<1 << endl;
    cout << "Resultado obtido:   ";
    cout<<expo(0.0, 9)<<endl;

    cout << "Resultado esperado: "<<2.5 << endl;
    cout << "Resultado obtido:   ";
    cout<<expo(1.0, 2)<<endl;

    cout << "Resultado esperado: "<<5 << endl;
    cout << "Resultado obtido:   ";
    cout<<expo(2.0, 2)<<endl;
    

    // ------------------------------------------------------------------------
    cout << endl << endl;

    // TESTES PARA A QUESTAO 4 ------------------------------------------------
    cout << "TESTES PARA A QUESTAO 4" << endl;

    char v[] = "Minas Gerais";
    cout << "Resuldado esperado: "<<0<< endl;
    cout << "Resuldado obtido:   "<<palindromo(v,strlen(v))<< endl;

    cout << endl;
    char v1[] = "socorram me subino onibus em marrocos";
    cout << "Resuldado esperado: "<<1<< endl;
    cout << "Resuldado obtido:   "<<palindromo(v1,strlen(v1))<< endl;

        // ------------------------------------------------------------------------
    return 0;
}
