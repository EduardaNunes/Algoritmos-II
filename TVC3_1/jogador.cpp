#include <iostream>
#include "jogador.h"

// ----------------------------------------------------------------------------
//Q1

Jogador::Jogador(string nome)
{
    // Implemente aqui sua solução!
    nomeJogador = nome;
    golsMarcados = 0;

}

string Jogador::getNome()
{
    // Implemente aqui sua solução!
    // Se necessário, remova o código abaixo.
    return nomeJogador;
}

int Jogador::getGols()
{
    // Implemente aqui sua solução!
    // Se necessário, remova o código abaixo.
    return golsMarcados;
}

void Jogador::setGols(int val)
{
    // Implemente aqui sua solução!
    golsMarcados = val;

}

//-Q1
// ----------------------------------------------------------------------------

Jogador::~Jogador()
{
}
