// Qual a complexidade das funções f, g e h?

int f(int n)
{
    int i, soma = 0;            // Constante
    for(i = 1; i <= n; i++)     // O(N)
        soma += 1;              // Constante
    return soma;                // Constante

    // Complexidade: O(N)
}

int g(int n)
{
    int i, soma = 0;            // Constante
    for(i = 1; i <= n; i++)     // O(N)
        soma += i + f(i);       // O(N)
    return soma;                // Constante

    // Complexidade: O(N) * O(N) = O(N²)
}

int h(int n)
{
    return f(n) + g(n); // O(N) + O(N²)

    // Complexidade: O(N) + O(N²) = O(N²)
}   