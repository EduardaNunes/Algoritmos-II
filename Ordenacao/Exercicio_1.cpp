/*

Considere a sequencia S = [6, 9, 1, 8, 15, 4, 13, 9, 2, 2].
Ilustre a execução dos algoritmos de ordenação a seguir,
exibindo os estados intermediários de S.

▶ Bubble sort

    // Primeira passada pelo vetor //

    compara 6 > 9 = false
    S = [6, 9, 1, 8, 15, 4, 13, 9, 2, 2]

    compara 9 > 1 = true
    S = [6, 1, 9, 8, 15, 4, 13, 9, 2, 2] 

    compara 9 > 8 = true
    S = [6, 1, 8, 9, 15, 4, 13, 9, 2, 2]

    compara 9 > 15 = false
    S = [6, 1, 8, 9, 15, 4, 13, 9, 2, 2] 

    compara 15 > 4 = true
    S = [6, 1, 8, 9, 4, 15, 13, 9, 2, 2]

    compara 15 > 13 = true
    S = [6, 1, 8, 9, 4, 13, 15, 9, 2, 2]

    compara 15 > 9 = true
    S = [6, 1, 8, 9, 4, 13, 9, 15, 2, 2]

    compara 15 > 2 = true
    S = [6, 1, 8, 9, 4, 13, 9, 2, 15, 2]

    compara 15 > 2 = true
    S = [6, 1, 8, 9, 4, 13, 9, 2, 2, 15]

    // Segunda passada pelo vetor //

    compara 6 > 1 = true
    S = [1, 6, 8, 9, 4, 13, 9, 2, 2, 15]

    compara 6 > 8 = false
    S = [1, 6, 8, 9, 4, 13, 9, 2, 2, 15]

    compara 8 > 9 = false
    S = [1, 6, 8, 9, 4, 13, 9, 2, 2, 15]

    compara 9 > 4 = true
    S = [1, 6, 8, 4, 9, 13, 9, 2, 2, 15]

    compara 9 > 13 = false
    S = [1, 6, 8, 4, 9, 13, 9, 2, 2, 15]

    compara 13 > 9 = true
    S = [1, 6, 8, 4, 9, 9, 13, 2, 2, 15]

    compara 13 > 2 = true
    S = [1, 6, 8, 4, 9, 9, 2, 13, 2, 15]

    compara 13 > 2 = true
    S = [1, 6, 8, 4, 9, 9, 2, 2, 13, 15]

    // Terceira passada pelo vetor //

    Continua a mesma coisa diminuindo o alcance em 1 a cada passada pq os itens no final do vetor já estão ordenados

▶ Selection sort

    S = [6, 9, 1, 8, 15, 4, 13, 9, 2, 2]

    Considere o menor numero = 6
    // Primeira passada pelo vetor //
    menor numero = 1
    S = [1, 9, 6, 8, 15, 4, 13, 9, 2, 2]

    Considere o menor numero = 9
    // Segunda passada pelo vetor //
    menor numero = 2
    S = [1, 2, 6, 8, 15, 4, 13, 9, 9, 2]

    Considere o menor numero = 6
    // Terceira passada pelo vetor //
    menor numero = 2
    S = [1, 2, 2, 8, 15, 4, 13, 9, 9, 6]

    Considere o menor numero = 8
    // Terceira passada pelo vetor //
    menor numero = 4
    S = [1, 2, 2, 4, 15, 8, 13, 9, 9, 6]

    Considere o menor numero = 15
    // Terceira passada pelo vetor //
    menor numero = 6
    S = [1, 2, 2, 4, 6, 8, 13, 9, 9, 15]

    Considere o menor numero = 8
    // Terceira passada pelo vetor //
    menor numero = 8
    S = [1, 2, 2, 4, 6, 8, 13, 9, 9, 15]

    Considere o menor numero = 13
    // Terceira passada pelo vetor //
    menor numero = 9
    S = [1, 2, 2, 4, 6, 8, 9, 13, 9, 15]

    Considere o menor numero = 13
    // Terceira passada pelo vetor //
    menor numero = 9
    S = [1, 2, 2, 4, 6, 8, 9, 9, 13, 15]

    Considere o menor numero = 13
    // Terceira passada pelo vetor //
    menor numero = 13
    S = [1, 2, 2, 4, 6, 8, 9, 9, 13, 15]

▶ Insertion sort

    Compara 9 < 6 = false
    S = [6, 9, 1, 8, 15, 4, 13, 9, 2, 2]

    Compara 1 < 9 = true
    S = [6, 1, 9, 8, 15, 4, 13, 9, 2, 2]
    Compara 1 < 6 = true
    S = [1, 6, 9, 8, 15, 4, 13, 9, 2, 2]

    Compara 8 < 9 = true
    S = [1, 6, 8, 9, 15, 4, 13, 9, 2, 2]
    Compara 8 < 6 = false
    S = [1, 6, 8, 9, 15, 4, 13, 9, 2, 2]

    Compara 15 < 9 = false
    S = [1, 6, 8, 9, 15, 4, 13, 9, 2, 2]

    Compara 4 < 15 = true
    S = [1, 6, 8, 9, 4, 15, 13, 9, 2, 2]
    Compara 4 < 9 = true
    S = [1, 6, 8, 4, 9, 15, 13, 9, 2, 2]
    Compara 4 < 8 = true
    S = [1, 6, 4, 8, 9, 15, 13, 9, 2, 2]
    Compara 4 < 6 = true
    S = [1, 4, 6, 8, 9, 15, 13, 9, 2, 2]
    Compara 4 < 1 = false
    S = [1, 4, 6, 8, 9, 15, 13, 9, 2, 2]

    Compara 13 < 15 = true
    S = [1, 4, 6, 8, 9, 13, 15, 9, 2, 2]
    Compara 13 < 9 = false
    S = [1, 4, 6, 8, 9, 13, 15, 9, 2, 2]

    Compara 9 < 15 = true
    S = [1, 4, 6, 8, 9, 13, 9, 15, 2, 2]
    Compara 9 < 13 = true
    S = [1, 4, 6, 8, 9, 9, 13, 15, 2, 2]
    Compara 9 < 9 = false
    S = [1, 4, 6, 8, 9, 9, 13, 15, 2, 2]

    Compara 2 < 15 = true
    S = [1, 4, 6, 8, 9, 9, 13, 2, 15, 2]
    Compara 2 < 13 = true
    S = [1, 4, 6, 8, 9, 9, 2, 13, 15, 2]
    Compara 2 < 9 = true
    S = [1, 4, 6, 8, 9, 2, 9, 13, 15, 2]
    Compara 2 < 9 = true
    S = [1, 4, 6, 8, 2, 9, 9, 13, 15, 2]
    Compara 2 < 8 = true
    S = [1, 4, 6, 2, 8, 9, 9, 13, 15, 2]
    Compara 2 < 6 = true
    S = [1, 4, 2, 6, 8, 9, 9, 13, 15, 2]
    Compara 2 < 4 = true
    S = [1, 2, 4, 6, 8, 9, 9, 13, 15, 2]
    Compara 2 < 1 = false
    S = [1, 2, 4, 6, 8, 9, 9, 13, 15, 2]

    Compara 2 < 15 = true
    S = [1, 2, 4, 6, 8, 9, 9, 13, 2, 15]
    Compara 2 < 13 = true
    S = [1, 2, 4, 6, 8, 9, 9, 2, 13, 15]
    Compara 2 < 9 = true
    S = [1, 2, 4, 6, 8, 9, 2, 9, 13, 15]
    Compara 2 < 9 = true
    S = [1, 2, 4, 6, 8, 2, 9, 9, 13, 15]
    Compara 2 < 8 = true
    S = [1, 2, 4, 6, 2, 8, 9, 9, 13, 15]
    Compara 2 < 6 = true
    S = [1, 2, 4, 2, 6, 8, 9, 9, 13, 15]
    Compara 2 < 4 = true
    S = [1, 2, 2, 4, 6, 8, 9, 9, 13, 15]
    Compara 2 < 2 = false
    S = [1, 2, 2, 4, 6, 8, 9, 9, 13, 15]



*/