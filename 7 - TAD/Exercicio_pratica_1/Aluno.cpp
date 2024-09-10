/*

Considere o TAD Aluno com os seguintes atributos:
▶ Matrícula;
▶ Idade;
▶ Nota.

E considere as seguintes operações:
▶ Definir aluno (leitura dos dados do aluno);
▶ Imprimir aluno (impressão dos dados do aluno);
▶ Foi aprovado? (verifica se o aluno foi aprovado).

*/

#include <iostream>
#include "Aluno.h"

using namespace std;

void Aluno::defineAluno(int newMatricula, int newIdade, float newNota){
    matricula = newMatricula;
    idade = newIdade;
    nota = newNota;
}

void Aluno::imprimeAluno(){
    cout << "---------- Dados do Aluno ----------" << endl;
    cout << "> Matrícula: " << matricula << endl;
    cout << "> Idade: " << idade << endl;
    cout << "> Nota: " << nota << endl;
    cout << "------------------------------------" << endl;
}

bool Aluno::foiAprovado(){
    if(nota >= 60){
        return true;
    }else{
        return false;
    }
}

int main(){

    int matricula = 987654321;
    int idade = 22;
    float nota = 90;

    Aluno Eduarda;
    Eduarda.defineAluno(matricula,idade,nota);
    Eduarda.imprimeAluno();
    
    if(Eduarda.foiAprovado()){
        cout << "Aprovada" << endl;
    }else{
        cout << "Reprovada" << endl;
    }
    
    return 0;
}
