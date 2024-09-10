// Qual a complexidade do algoritmo abaixo?

int maior(int v[], int n)
{
    int m = v[0];                   // constante
    for(int i = 1; i < n; i++)      // O(N)
        if(v[i] >= m)               // constante
            m = v[i];               // constante
    return m;                       // constante

    // Complexidade = O(N)
}