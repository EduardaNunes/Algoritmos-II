/*

Altere o TAD Aluno para que o atributo nota seja
composto por 3 valores.
Crie uma operação para calcular a média do aluno.

*/

#include <iostream>
#include <iomanip>
#include "Aluno.h"

using namespace std;

void Aluno::defineAluno(int newMatricula, int newIdade, float newNota[]){
    matricula = newMatricula;
    idade = newIdade;
    for(int i = 0; i < 3; i++){
        notas[i] = newNota[i];
    }
}

void Aluno::imprimeAluno(){
    cout << "---------- Dados do Aluno ----------" << endl;
    cout << "> Matrícula: " << matricula << endl;
    cout << "> Idade: " << idade << endl;
    cout << "> Notas: ";
    for(int i = 0; i < 3; i++){
        cout << notas[i] << ' ';
    } 
    cout << endl;
    cout << "> Média: " << fixed << setprecision(1) << mediaNotas() << endl;
    cout << "------------------------------------" << endl;
}

float Aluno::mediaNotas(){
    float soma = 0;
    for(int i = 0; i < 3; i++){
        soma += notas[i];
    }
    return (soma/3);
}

bool Aluno::foiAprovado(){
    if(mediaNotas() >= 60){
        return true;
    }else{
        return false;
    }
}

int main(){
    int matricula = 987654321;
    int idade = 22;
    float notas[] = {90.0,86.0,99.0};

    Aluno Eduarda;
    Eduarda.defineAluno(matricula,idade,notas);
    Eduarda.imprimeAluno();
    
    if(Eduarda.foiAprovado()){
        cout << "Aprovada" << endl;
    }else{
        cout << "Reprovada" << endl;
    }  
}