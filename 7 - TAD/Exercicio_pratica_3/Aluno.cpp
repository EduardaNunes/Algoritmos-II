/*

Altere novamente o TAD Aluno, fazendo com que a
quantidade de notas seja definida em tempo de execução.

*/

#include <iostream>
#include <iomanip>
#include "Aluno.h"

using namespace std;

void Aluno::defineAluno(int newMatricula, int newIdade, float newNota[], int newTam){
    matricula = newMatricula;
    idade = newIdade;
    notas = new float[newTam];
    for(int i = 0; i < newTam; i++){
        cout << "Teste: " << *(newNota+i) << endl;
        *(notas+i) = *(newNota+i);
        cout << "Teste: " << *(notas+i) << endl;
    }
    tam = newTam;
}

void Aluno::imprimeAluno(){
    cout << "---------- Dados do Aluno ----------" << endl;
    cout << "> Matrícula: " << matricula << endl;
    cout << "> Idade: " << idade << endl;
    cout << "> Notas: ";
    for(int i = 0; i < tam; i++){
        cout << *(notas+i) << ' ';
    } 
    cout << endl;
    cout << "> Média: " << fixed << setprecision(1) << mediaNotas() << endl;
    cout << "------------------------------------" << endl;
}

float Aluno::mediaNotas(){
    float soma = 0;
    for(int i = 0; i < tam; i++){
        soma += *(notas+i);
    }
    return (soma/tam);
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
    int tam = 4;
    float notas[tam] = {86,90,100,99};

    Aluno Eduarda;
    Eduarda.defineAluno(matricula,idade,notas,tam);
    Eduarda.imprimeAluno();
    
    if(Eduarda.foiAprovado()){
        cout << "Aprovada" << endl; 
    }else{
        cout << "Reprovada" << endl;
    }  
}