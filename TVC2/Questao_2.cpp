// 2. (5 Pontos) Considere o algoritmo de ordenação abaixo:

void ordena(int v[], int n) {
    for(int i = 1; i < n; i++) {         
        int j = i-1;                    
        int aux = vet[i];                 
        while(j >= 0 && vet[j] > aux) { 
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = aux;
    }
}

/*

(a) Identifique o algoritmo acima e indique a sua complexidade no melhor e no pior caso.

    Melhor caso ele não entra no while, tendo a complexidade apenas do loop for de O(N)
    Pior caso ele entra no while todas as vezes sendo n*(n+1). Logo, a complexidade ficaria O(N²)

(b) Ilustre a execu ̧c ̃ao do algoritmo para a primeira passagem no vetor
    (ou seja, a primeira iteração do laço mais externo). Utilize como exemplo o vetor V = [6, 1, 8, 8, 3, 4, 9, 7, 4].

    i = 1
    j = 0
    aux = vet[1] = 1

    while(0 >= 0 && 6 > 1)
        troca o valor do vet[1] pelo vet[0]
        V = [6, 6, 8, 8, 3, 4, 9, 7, 4]
        j = -1
        sai do loop while
    
    troca o valor do vet[-1+1] para o valor do aux
    V = [1, 6, 8, 8, 3, 4, 9, 7, 4]

    
    i = 2
    j = 1
    aux = vet[2] = 8

    while(1 >= 0 && 6 > 8) não entra
    
    troca o valor do vet[1+1] para o valor do aux (nesse caso não muda nada)
    V = [1, 6, 8, 8, 3, 4, 9, 7, 4]

*/