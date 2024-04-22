#include <iostream>
#include <stdlib.h>

using namespace std;

/**
 * \brief Função que aloca dinamicamente um vetor de 'tam' números inteiros aleatórios.
 * \param tam O tamanho do vetor.
 * \return O ponteiro para o vetor alocado.
 */
int *alocaVetorAleatorio(int tam)
{
    // Aloca vetor de 'tam' posicoes
    int *vet = new int[tam];

    // Preenche o vetor com inteiros aleatórios entre 0 e 20
    for (int i = 0; i < tam; i++)
    {
        *(vet + i) = rand() % 21;
    }

    // Retorna o ponteiro para o vetor alocado
    return vet;
}

/**
 * \brief Função que imprime um vetor de inteiros.
 * \param vet O ponteiro para o vetor.
 * \param tam O tamanho do vetor.
 */
void imprimeVetor(int *vet, int tam)
{
    cout << "Vetor: ";
    for (int i = 0; i < tam; i++)
    {
        cout << *(vet + i) << " ";
    }
    cout << endl;
}

/**
 * \brief Função recursiva que retorna o menor valor num vetor de tamanho 'tam'.
 * Nesta função, a recursão é feita removendo o último elemento do vetor a cada chamada.
 * \param vet O ponteiro para o vetor.
 * \param tam O tamanho do vetor.
 * \return O menor valor do vetor.
 */
int menorValor(int *vet, int tam)
{
    // Caso base: vetor com um único elemento.
    if (tam == 1)
    {
        // Retorna o valor do único elemento, que é o menor valor.
        return vet[0];
    }

    // Recursão: chama a função para o vetor sem o último elemento.
    else
    {
        // Separar o último elemento do vetor
        int ultimoValor = vet[tam - 1];

        // Chama recursivamente para o vetor sem o última elemento
        int menorValorSemUltimo = menorValor(vet, tam - 1);

        // Compara o último valor com o menor valor sem o último
        if (ultimoValor < menorValorSemUltimo)
            return ultimoValor;
        else
            return menorValorSemUltimo;
    }
}

/**
 * \brief Função recursiva que retorna a soma dos valores de um vetor de tamanho 'tam'.
 * Nesta função, a recursão é feita removendo o primeiro elemento do vetor a cada chamada.
 * \param vet O ponteiro para o vetor.
 * \param tam O tamanho do vetor.
 * \return A soma dos valores do vetor.
 */
int somaValores(int *vet, int tam)
{
    // Caso base: vetor com um único elemento.
    if (tam == 1)
    {
        // Retorna o valor do único elemento, que é a soma dos valores.
        return vet[0];
    }

    // Recursão: chama a função para o vetor sem o primeiro elemento.
    else
    {
        // Separar o primeiro elemento do vetor
        int primeiroValor = vet[0];

        // Chama recursivamente para o vetor sem o primeiro elemento
        int somaValorSemPrimeiro = somaValores(vet + 1, tam - 1);

        // Retorna a soma do primeiro valor com a soma dos demais valores
        return primeiroValor + somaValorSemPrimeiro;
    }
}

/**
 * \brief Função recursiva que conta a quantidade de valores pares em um vetor de tamanho 'tam'.
 * Nesta função, a recursão é feita removendo o último elemento do vetor a cada chamada.
 * \param vet O ponteiro para o vetor.
 * \param tam O tamanho do vetor.
 * \return A quantidade de valores pares no vetor.
 */
int contaPares(int *vet, int tam)
{
    // Caso base: vetor vazio
    if (tam == 0)
    {
        // Retorna 0, pois não há valores pares num vetor vazio
        return 0;
    }

    // Recursão: chama a função para o vetor sem o último elemento.
    else
    {
        // Separar o último elemento do vetor
        int ultimoValor = vet[tam - 1];

        // Chamar recursivamente pro vetor sem a ultima posição
        int quantidadeParesSemUltimo = contaPares(vet, tam - 1);

        // Verifica se o último valor é par, incrementando a quantidade de pares se sim
        if (ultimoValor % 2 == 0)
        {
            quantidadeParesSemUltimo++;
        }

        // Retorna a quantidade de pares no vetor
        return quantidadeParesSemUltimo;
    }
}

/**
 * \brief Função recursiva que retorna a posição da última ocorrência do maior valor em um vetor de
 * tamanho 'tam'.
 * Nesta função, a recursão é feita removendo o último elemento do vetor a cada chamada. Com essa
 * abordagem, caso existam dois valores iguais, a função retornará a posição do último valor igual.
 * \param vet O ponteiro para o vetor.
 * \param tam O tamanho do vetor.
 * \return A posição do maior valor no vetor (última ocorrência).
 */
int posicaoMaiorValor(int *vet, int tam)
{
    // Caso base: vetor com um único elemento.
    if (tam == 1)
    {
        // Retorna a posição do único elemento, que é a posição do maior valor.
        return 0;
    }

    // Recursão
    else
    {
        // Separar o último elemento do vetor
        int ultimoValor = vet[tam - 1];

        // Chamar recursivamente pro vetor sem a ultima posição
        int posicaoMaiorValorSemUltimo = posicaoMaiorValor(vet, tam - 1);

        // Compara se o último valor é maior que o maior valor sem o último
        if (vet[posicaoMaiorValorSemUltimo] > ultimoValor)
            return posicaoMaiorValorSemUltimo;
        else
            return tam - 1;
    }
}

/**
 * \brief Função auxiliar recursiva que retorna a posição do menor valor em um vetor de tamanho 'tam'.
 * Nesta função, a recursão é feita removendo o primeiro elemento do vetor a cada chamada. Com essa
 * abordagem, caso existam dois valores iguais, a função retornará a posição do primeiro valor.
 * Para isso, vamos usar adicionamente um parâmetro i indicando a posição de início do vetor.
 * \param vet O ponteiro para o vetor (neste caso, sempre para a primeira posição)
 * \param tam O tamanho do vetor (neste caso, sempre o tamanho total do vetor)
 * \param i A posição de início para busca do vetor
 * \return A posição do menor valor no vetor (primeira ocorrência).
 */
int auxPosicaoMenorValor(int *vet, int tam, int i)
{
    // Caso base: vetor com um único elemento (ou seja, o início do vetor já é na última posição)
    if (i == tam - 1)
    {
        // Retorna a posição deste único elemento, que é a posição do menor valor.
        return i;
    }

    // Recursão
    else
    {
        // Separar o primeiro elemento do vetor
        int primeiroValor = vet[i];

        // Chamar recursivamente pro vetor sem a primeira posição (neste caso, apenas o i aumenta em
        // 1 unidade, indicando que a função deve começar a partir da próxima posição)
        int posicaoMenorValorSemPrimeiro = auxPosicaoMenorValor(vet, tam, i + 1);

        // Compara se o primeiro valor é menor que o menor valor sem o primeiro
        if (primeiroValor <= vet[posicaoMenorValorSemPrimeiro])
            return i;
        else
            return posicaoMenorValorSemPrimeiro;
    }
}

/**
 * \brief Função empacotadora que retorna a posição da primeira ocorrência do menor valor em um
 * vetor de tamanho 'tam'.
 * \param vet O ponteiro para o vetor.
 * \param tam O tamanho do vetor.
 * \return A posição do menor valor no vetor (primeira ocorrência).
 */
int posicaoMenorValor(int *vet, int tam)
{
    // Chama a função auxiliar com i = 0
    return auxPosicaoMenorValor(vet, tam, 0);
}

/**
 * \brief Função que identifica recursivamente a primeira ocorrência de um número no vetor que seja
 * menor do que 'val' e substituir este número no vetor por 'val'. Caso não exista nenhum número
 * no vetor que seja menor do que val, a função não deve modificar o vetor.
 * \param val O valor a ser comparado.
 * \param vet O ponteiro para o vetor.
 * \param tam O tamanho do vetor.
 */
void substituiPrimeiroMenor(int val, int *vet, int tam)
{
    // Caso base: vetor vazio não faz nada
    if (tam == 0)
    {
        return;
    }

    // Recursão: chama a função para o vetor sem o primeiro elemento.
    else
    {
        if (vet[0] < val)
        {
            // Se o primeiro valor do vetor for menor que 'val', substitui e encerra a recursão
            vet[0] = val;
        }
        else
        {
            // Chama recursivamente para o vetor sem o primeiro elemento
            substituiPrimeiroMenor(val, vet + 1, tam - 1);
        }
    }
}

/**
 * \brief Função auxiliar que identifica recursivamente todos os números no vetor que sejam menores
 * do que 'val' e substitui todos estes números no vetor por 'val'.
 * \param val O valor a ser comparado.
 * \param vet O ponteiro para o vetor.
 * \param tam O tamanho do vetor.
 * \param troca O ponteiro para uma variável que indica se houve alguma troca.
 */
void auxSubstituiTodosMenor(int val, int *vet, int tam, bool *troca)
{
    // Caso base: vetor vazio não faz nada
    if (tam != 0)
    {
        if (vet[0] < val)
        {
            // Se a primeira posição do vetor for menor que 'val', substitui e marca que houve
            // uma troca. Em seguida, chama recursivamente para o vetor sem o primeiro elemento.
            *troca = true;
            vet[0] = val;
        }
        auxSubstituiTodosMenor(val, vet + 1, tam - 1, troca);
    }
}

/**
 * \brief Função empacotadora para identificar todos os números no vetor que sejam menores do que
 * 'val' e substituir todos estes números no vetor por 'val'. Caso não exista nenhum número no vetor
 * que seja menor do que val, a função não deve modificar o vetor e deve imprimir uma mensagem
 * informando que não foram realizadas trocas.
 * \param val O valor a ser comparado.
 * \param vet O ponteiro para o vetor.
 * \param tam O tamanho do vetor.
 */
void substituiTodosMenor(int val, int *vet, int tam)
{
    bool trocou = false;
    auxSubstituiTodosMenor(val, vet, tam, &trocou);
    if (!trocou)
    {
        cout << "Nenhuma troca efetuada." << endl;
    }
}

/**
 * Programa principal para testar as funções recursivas.
 */
int main()
{
    // Initializa o gerador de números aleatórios
    srand(time(NULL));

    // Permite que o usuário escolha o tamanho do vetor
    int n;
    cout << "Qual o tamanho do vetor: ";
    cin >> n;

    // Teste para garantir que o vetor possui ao menos um elemento
    if (n > 0)
    {
        // Alocando vetor de inteiros aleatórios
        int *vet = alocaVetorAleatorio(n);

        // Imprimindo o vetor
        imprimeVetor(vet, n);

        // TODO: Chame aqui as fuções que quiser testar

        // Liberando o vetor
        delete[] vet;
    }
    return 0;
}
