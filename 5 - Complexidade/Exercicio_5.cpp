// Qual a complexidade do algoritmo abaixo?

bool confere(int vetA[], int vetB[], int n)
{
    for(int i = 0; i < n; i++)      // O(N)
        for(int j = 0; j < n; j++)  // O(N)
            if(vetA[i] == vetB[j])  // Constante
                return true;        // Constante

    return false;                   // Constante

    // Complexidade: O(N) * O(N) = O(N²)
}