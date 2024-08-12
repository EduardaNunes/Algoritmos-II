// (5 Pontos) Determine a frequência T(n) e a ordem de grandeza O(?) da função abaixo:

    void func(int v[], int n) {             
        for(int i = 0; i < n; i++) {        // n + 1
            if(v[i] < 0) {                  // n
            int soma = 0;                   // n
            for(int j = i; j >= 0; j--)     // n*[(n+1)/2  + 1]
                soma += v[j];               // (n+1)/2
                v[i] = soma;                // (n+1)/2
            }
        }
    }

// Frequência = (n+1) + (n) + (n) + ((n²+n)/2 + n) + ((n+1)/2) + ((n+1)/2)
// Frequência = 4n+1 + (n²+n)/2 + 2((n-1)/2)
// Frequência = 4n+1 + (n²+n)/2 + n+1
// Frequência = 5n+2 + (n²+n)/2

// Complexidade = O(N²)