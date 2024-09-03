/*

Altere novamente o TAD Aluno, fazendo com que a
quantidade de notas seja definida em tempo de execução.

*/

class Aluno{

    private:
        int matricula;
        int idade;
        float *notas;
        int tam;

    public:
        void defineAluno(int matricula, int idade, float notas[], int tam);
        void imprimeAluno();
        float mediaNotas();
        bool foiAprovado();

};