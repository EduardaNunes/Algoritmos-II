/*

3. Considere o trecho de programa abaixo. Que valor  ́e calculado pela fun ̧c ̃ao f? (Dˆe sua resposta
em fun ̧c ̃ao de n.) Dˆe uma express ̃ao justa de O para o crescimento de tempo de processamento
no pior caso da fun ̧c ̃ao f. Fa ̧ca uma fun ̧c ̃ao f1 que seja O(1).

*/

int f(int n)
{
    int soma = 0;
    for(int i=1; i<=n; ++i)  // é basicamente a ideia de um contado, envia quantas n vezes vc quer que esse contador aumente e retorna 
        soma = soma + 1;     // o resultado do contador no fim. O que nesse caso é desnecessário podendo ser substituído pela função a baixo.
    return soma;
}

int f(int n)
{
    return n; // Complexidade: O(1)
}