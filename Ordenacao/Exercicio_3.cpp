/*

Considere a sequência S = [6, 9, 1, 8, 15, 4, 13, 9, 2, 2]. Ilustre
o processo recursivo do Merge sort, desenhando a árvore
de recursao e a etapa de combinação por intercalação dos
subvetores.

// ----------------------------------------------------------------- //

▶ Começa a Divisão dentro da função recursiva:
    [6, 9, 1, 8, 15, 4, 13, 9, 2, 2]
    [6, 9, 1, 8, 15][4, 13, 9, 2, 2] 
    [6, 9][1, 8, 15][4, 13][9, 2, 2]
    [6][9][1][8, 15][4][13][9][2, 2]
    [6][9][1][8][15][4][13][9][2][2]

▶ Agora que a parte recursiva já dividiu todo o vetor, ele "volta fechando", ou seja, intercalado

    Intercala [2] e [2]
    Ordenado = [2, 2]
    Resultado = [6, 9, 1, 8, 15, 4, 13, 9, 2, 2]

    Intercala [8, 15]
    Ordenado = [6, 15]
    Resultado = [6, 9, 1, 8, 15, 4, 13, 9, 2, 2]

    Intercala [9] e [2, 2]
    Ordenado = [2, 2, 9]
    Resultado = [6, 9, 1, 8, 15, 4, 13, 2, 2, 9]

    Intercala [1] e [8, 15]
    Ordenado = [1, 8, 15]
    Resultado = [6, 9, 1, 8, 15, 4, 13, 2, 2, 9]

    Intercala [4] e [13]
    Ordenado = [4, 13]
    Resultado = [6, 9, 1, 8, 15, 4, 13, 2, 2, 9]

    Intercala [6] e [9]
    Ordenado = [6, 9]
    Resultado = [6, 9, 1, 8, 15, 4, 13, 2, 2, 9]

    Intercala [4, 13] e [2, 2, 9]
    Ordenado = [2, 2, 4, 9, 13]
    Resultado = [6, 9, 1, 8, 15, 2, 2, 4, 9, 13]

    Intercala [6, 9] e [1, 8, 15]
    Ordenado = [1, 6, 8, 9, 15]
    Resultado = [1, 6, 8, 9, 15, 2, 2, 4, 9, 13]

    Intercala [1, 6, 8, 9, 15] e [2, 2, 4, 9, 13]
    Ordenado = [1, 2, 2, 4, 6, 8, 9, 9, 13, 15]
    Resultado = [1, 2, 2, 4, 6, 8, 9, 9, 13, 15]

*/

