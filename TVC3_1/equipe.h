#ifndef EQUIPE_H
#define EQUIPE_H

#include "jogador.h"

#define MAX 5

class Equipe
{
public:
    Equipe();
    ~Equipe();

    void novoJogador(string nome, int gols);
    string nomeArtilheiro();
    void imprimeJogadores();

private:
    int n;
    Jogador *jogadores[MAX];
};

#endif // EQUIPE_H
