#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>

using namespace std;

class Aluno
{
  public:
    Aluno(string n, string m);
    ~Aluno();

    // exercicio 1
    void leNotas();
    double calculaMedia();

    // operacoes
    void setNome(string n);
    string getNome();

    // exercicio 2
    // implemente aqui
    void setMatricula(string novaMatricula);
    string getMatricula();
    void setIdade(int novaIdade);
    int getIdade();

    // exercicio 5
    // implemente aqui
    void leFrequencia();

    // exercicio 6
    // implemente aqui
    void imprimeRelatorio();
    void calculaAprovacao(int indexMateria);

  private:
    int idade;
    string nome, matricula;
    double notas[7];

    // exercicio 3
    // implemente aqui

    // exercicio 4
    // implemente aqui
    bool frequencias[7];
};

#endif // ALUNO_H
