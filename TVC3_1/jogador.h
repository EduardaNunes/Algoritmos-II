#ifndef JOGADOR_H
#define JOGADOR_H

#include <string>

using namespace std;

class Jogador
{
public:
    Jogador(string nome);
    ~Jogador();

    string getNome();
    int getGols();
    void setGols(int val);

private:
    string nomeJogador;
    int golsMarcados;
};

#endif // JOGADOR_H
