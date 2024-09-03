/*

Altere o TAD Aluno para que o atributo nota seja
composto por 3 valores.
Crie uma operação para calcular a média do aluno.

*/

class Aluno{

    private:
        int matricula;
        int idade;
        float notas[3];

    public:
        void defineAluno(int matricula, int idade, float notas[]);
        void imprimeAluno();
        float mediaNotas();
        bool foiAprovado();

};