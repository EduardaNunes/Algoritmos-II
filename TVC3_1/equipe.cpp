#include "equipe.h"
#include <iostream>

using namespace std;

Equipe::Equipe()
{
    n = 0;
    for (int i = 0; i < MAX; i++)
    {
        jogadores[i] = NULL;
    }
}

// ----------------------------------------------------------------------------
//Q2

Equipe::~Equipe()
{
    // Implemente aqui sua solução!
    for(int i = 0; i < n; i++){
        delete jogadores[i];
    }

}

void Equipe::novoJogador(string nome, int gols)
{
    // Implemente aqui sua solução!
    if(n < MAX){
        jogadores[n] = new Jogador(nome);
        jogadores[n]->setGols(gols);
        n++;
    }else{
        return;
    }
}

string Equipe::nomeArtilheiro()
{
    // Implemente aqui sua solução!
    // Se necessário, remova o código abaixo.
    int maiorIndex = 0;
    for(int i = 1; i < n; i++){
        if(jogadores[i]->getGols() > jogadores[maiorIndex]->getGols()){
            maiorIndex = i;
        }
    }

    return jogadores[maiorIndex]->getNome();

}


//-Q2
// ----------------------------------------------------------------------------

void Equipe::imprimeJogadores()
{
    cout << "Nome\tGols" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << jogadores[i]->getNome() << "\t"
             << jogadores[i]->getGols() << endl;
    }
    cout << "=> Artilheiro: " << nomeArtilheiro() << endl;
}

