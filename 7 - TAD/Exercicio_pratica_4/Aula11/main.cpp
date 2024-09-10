#include <iostream>
#include "Aluno.h"
#include "Prova.h"

using namespace std;

int main()
{
    cout << "ALGORITMOS II - AULA PRATICA 11\n" << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 1
    // ------------------------------------------------------------------------
    Aluno a("Carlos", "202365123AB");

    // leitura das notas do aluno
    a.leNotas();
    // calculo da media do aluno
    double m = a.calculaMedia();

    cout << "Media do aluno: " << m << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 3
    // ------------------------------------------------------------------------

    // Implemente aqui

    a.setNome("Eduarda");
    a.setIdade(22);
    a.setMatricula("202376015A");
    cout << "---------- Informações do Aluno ----------" << endl;
    cout << "> Nome: " << a.getNome() << endl;
    cout << "> Idade: " << a.getIdade() << endl;
    cout << "> Matricula: " << a.getMatricula() << endl;
    cout << "------------------------------------------" << endl;


    // ------------------------------------------------------------------------
    // EXERCICIO 5
    // ------------------------------------------------------------------------

    // Implemente aqui
    a.leFrequencia();


    // ------------------------------------------------------------------------
    // EXERCICIO 6
    // ------------------------------------------------------------------------

    // Implemente aqui
    a.imprimeRelatorio();

    // ------------------------------------------------------------------------
    // EXERCICIO 7
    // ------------------------------------------------------------------------

    //Prova p(3);

    return 0;
}
