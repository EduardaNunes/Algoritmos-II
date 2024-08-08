// Qual a complexidade do algoritmo abaixo?

bool confere(int vetA[], int n)
{
    for(int i = 0; i < n; i++)          // O(N)
        for(int j = i+1; j < n; j++)    // O(N-1)
            if(vetA[i] == vetA[j])      // Constante
                return true;            // Constante

    return false;                       // Constante

    // Complexidade: O(N) * O(N-1) = O(N² - N) = O(N²)
}