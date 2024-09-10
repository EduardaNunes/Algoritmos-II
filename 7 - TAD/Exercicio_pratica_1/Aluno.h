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

class Aluno{

    private:
        int matricula;
        int idade;
        float nota;
    
    public:
        void defineAluno(int matricula, int idade, float nota);
        void imprimeAluno();
        bool foiAprovado();
};