#include <iostream>
#include "matrizListra.h"
#include "equipe.h"
#include "jogador.h"

/// NOME: Coloque aqui seu nome completo!
/// MATRÍCULA: Coloque aqui seu número de matrícula!

using namespace std;

int main()
{
    cout << "=====================================" << endl;
    cout << "TESTES PARA A QUESTÃO 1" << endl;
    cout << "------------------------" << endl;
    cout << "Jogador para teste" << endl;
    cout << "Nome: Neymar" << endl;
    cout << "Gols: 3" << endl;
    cout << endl;

    Jogador j("Neymar");
    j.setGols(3);
    cout << "Seu jogador" << endl;
    cout << "Nome: " << j.getNome() << endl;
    cout << "Gols: " << j.getGols() << endl;
    cout << endl;

    cout << "=====================================" << endl;
    cout << "TESTES PARA A QUESTÃO 2" << endl;
    cout << "------------------------" << endl;
    cout << "Equipe A para teste" << endl;
    cout << "Nome\tGols" << endl;
    cout << "Maria\t2" << endl;
    cout << "Sofia\t1" << endl;
    cout << "=> Artilheiro: Maria" << endl;
    cout << endl;

    Equipe equipeA;
    equipeA.novoJogador("Maria", 2);
    equipeA.novoJogador("Sofia", 1);

    cout << "Sua equipe A" << endl;
    equipeA.imprimeJogadores();
    cout << endl;

    cout << "------------------------" << endl;
    cout << "Equipe B para teste" << endl;
    cout << "Nome\tGols" << endl;
    cout << "Maria\t1" << endl;
    cout << "Sofia\t0" << endl;
    cout << "Laura\t3" << endl;
    cout << "Alice\t1" << endl;
    cout << "Julia\t0" << endl;
    cout << "=> Artilheiro: Laura" << endl;
    cout << endl;

    Equipe equipeB;
    equipeB.novoJogador("Maria", 1);
    equipeB.novoJogador("Sofia", 0);
    equipeB.novoJogador("Laura", 3);
    equipeB.novoJogador("Alice", 1);
    equipeB.novoJogador("Julia", 0);
    equipeB.novoJogador("Luisa", 5);

    cout << "Sua equipe B" << endl;
    equipeB.imprimeJogadores();
    cout << endl;

    cout << "=====================================" << endl;
    cout << "TESTES PARA A QUESTÃO 3" << endl;
    cout << "------------------------" << endl;
    cout << "Matriz A (3 x 5) para teste" << endl;
    cout << "  0   2   0   4   0" << endl;
    cout << "  0   4   0   8   0" << endl;
    cout << "  0   6   0   2   0" << endl;
    cout << "=> Eh quadrada? NAO" << endl;
    cout << endl;

    MatrizListra matA(3, 5);
    for (int i = 0; i < 3; i++)
        for (int j = 1; j < 5; j += 2)
        {
            int val = (i + 1) * (j + 1) % 10;
            matA.set(i, j, val);
        }

    cout << "Sua matriz A:" << endl;
    matA.imprime();
    cout << "=> Eh quadrada? " << (matA.ehQuadrada() ? "SIM" : "NAO") << endl;
    cout << endl;

    cout << "Sua copia da matriz A:" << endl;
    MatrizListra *copiaA = matA.criaCopia();
    if (copiaA != NULL)
    {
        copiaA->imprime();
        delete copiaA;
    }
    cout << endl;

    cout << "------------------------" << endl;
    cout << "Matriz B (4 x 4) para teste" << endl;
    cout << "  0   2   0   4" << endl;
    cout << "  0   4   0   8" << endl;
    cout << "  0   6   0   2" << endl;
    cout << "  0   8   0   6" << endl;
    cout << "=> Eh quadrada? SIM" << endl;
    cout << endl;

    MatrizListra matB(4, 4);
    for (int i = 0; i < 4; i++)
        for (int j = 1; j < 4; j += 2)
        {
            int val = (i + 1) * (j + 1) % 10;
            matB.set(i, j, val);
        }

    cout << "Sua matriz B:" << endl;
    matB.imprime();
    cout << "=> Eh quadrada? " << (matB.ehQuadrada() ? "SIM" : "NAO") << endl;
    cout << endl;

    cout << "Sua copia da matriz B:" << endl;
    MatrizListra *copiaB = matB.criaCopia();
    if (copiaB != NULL)
    {
        copiaB->imprime();
        delete copiaB;
    }
    cout << endl;
}
