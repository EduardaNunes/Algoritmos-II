#include "Aluno.h"

Aluno::Aluno(string n, string m)
{
    cout << "Criando aluno" << endl;
    nome = n;
    matricula = m;
}

Aluno::~Aluno()
{
    cout << "Destruindo aluno" << endl;
}

// ----------------------------------------------------------------------------
// Exercicio 1
// ----------------------------------------------------------------------------

void Aluno::leNotas()
{
    // Implemente sua solucao aqui
    cout << "Insira as notas do aluno:" << endl;
    for(int i = 0; i < 7; i++){
        cin >> notas[i];
    }
}

double Aluno::calculaMedia()
{
    // Implemente sua solucao aqui
    float soma = 0;
    for(int i = 0; i < 7; i++){
        soma += notas[i];
    }
    float media = (soma/7);
    return media;
}

// ----------------------------------------------------------------------------

void Aluno::setNome(string novo)
{
    nome = novo;
}

string Aluno::getNome()
{
    return nome;
}

// ----------------------------------------------------------------------------
// Exercicio 2
// ----------------------------------------------------------------------------

// Implemente aqui a sua solucao

void Aluno::setMatricula(string novaMatricula){
    matricula = novaMatricula;
}

string Aluno::getMatricula(){
    return matricula;
}

void Aluno::setIdade(int novaIdade){
    idade = novaIdade;
}

int Aluno::getIdade(){
    return idade;
}


// ----------------------------------------------------------------------------
// Exercicio 3
// ----------------------------------------------------------------------------

// Implemente aqui sua solucao


// ----------------------------------------------------------------------------
// Exercicio 5
// ----------------------------------------------------------------------------

// Implemente aqui sua solucao
void Aluno::leFrequencia(){
    cout << "Insira a frequencia do aluno em cada matéria. Digite 1 para true e 0 para false: " << endl;
    for(int i = 0; i < 7; i++){
        cin >> frequencias[i];
    }
}


// ----------------------------------------------------------------------------
// Exercicio 6
// ----------------------------------------------------------------------------

// Implemente aqui sua solucao

void Aluno::calculaAprovacao(int indexMateria){
    if(frequencias[indexMateria] && (notas[indexMateria] >= 60)){
        cout << "Aprovado" << endl;
    }else{
        cout << "Reprovado" << endl;
    }
}

void Aluno::imprimeRelatorio(){
    cout << "---------- Relatorio do Aluno ----------" << endl;
    cout << "> Nome: " << getNome() << endl;
    cout << "> Idade: " << getIdade() << endl;
    cout << "> Matricula: " << getMatricula() << endl;
    cout << "-------------- Disciplinas -------------" << endl;
    cout << "> Matematica" << endl;
    cout << "    > Nota: " << notas[0] << endl;
    cout << "    > Frenquente: " << frequencias[0] << endl;
    cout << "    > Resultado: ";
    calculaAprovacao(0);
    cout << "> Ciencias" << endl;
    cout << "    > Nota: " << notas[1] << endl;
    cout << "    > Frenquente: " << frequencias[1] << endl;
    cout << "    > Resultado: ";
    calculaAprovacao(1);
    cout << "> Portugues" << endl;
    cout << "    > Nota: " << notas[2] << endl;
    cout << "    > Frenquente: " << frequencias[2] << endl;
    cout << "    > Resultado: ";
    calculaAprovacao(2);
    cout << "> Geografia" << endl;
    cout << "    > Nota: " << notas[3] << endl;
    cout << "    > Frenquente: " << frequencias[3] << endl;
    cout << "    > Resultado: ";
    calculaAprovacao(3);
    cout << "> Historia" << endl;
    cout << "    > Nota: " << notas[4] << endl;
    cout << "    > Frenquente: " << frequencias[4] << endl;
    cout << "    > Resultado: ";
    calculaAprovacao(4);
    cout << "> Ed. Fisica" << endl;
    cout << "    > Nota: " << notas[5] << endl;
    cout << "    > Frenquente: " << frequencias[5] << endl;
    cout << "    > Resultado: ";
    calculaAprovacao(5);
    cout << "> Ingles" << endl;
    cout << "    > Nota: " << notas[6] << endl;
    cout << "    > Frenquente: " << frequencias[6] << endl;
    cout << "    > Resultado: ";
    calculaAprovacao(6);
}

