// Qual a complexidade do algoritmo abaixo?

bool busca(int vetA[], int vetB[], int n,int x)
{
    for(int i = 0; i < n; i++)      // O(N)
        if(vetA[i] == x)            // Constante
            return true;            // Constante
    
    for(int i = 0; i < n; i++)      // O(N)
        if(vetB[i] == x)            // Constante
            return true;            // Constante
    
    return false;                   // Constante

    // Complexidade: O(N) + O(N) = 2*O(N) = O(N)
}