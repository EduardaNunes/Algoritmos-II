/*

Considere o trecho de programa abaixo. (A função f é dada no exercício anterior.) Que valor
é calculado por g? (Dê sua resposta em função de n.) Dê uma expressão justa de O para o
crescimento de tempo de processamento no pior caso da função g.

*/

int g(int n)
{
    int soma = 0;
    for(int i=1; i<=n; ++i)
        soma = soma + i + f(i); // Complexidade: n*(O(N)) = O(N²)
    return soma;
}

/*

soma = 2 * (i + (i+1) + (i+2) + ... + (i+n))
soma = 2 * ((n+1))/2
soma = n + 1

só que passa pelo loop n vezez. Logo, n * (n+1) = n² + n 

*/