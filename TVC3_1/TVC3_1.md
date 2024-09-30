Questões:

1. (5 pontos) Para o TAD Jogador, desenvolva:

(a) (2 pontos) O construtor Jogador(string nome); que utiliza o parˆametro para inicializar o nome
do jogador, al ́em de zerar o contador de gols marcados.

(b) (2 pontos) As opera ̧c ̃oes string getNome(); e int getGols(); para acessar os atributos.

(c) (1 pontos) A opera ̧c ̃ao void setGols(int val); para alterar o contador de gols marcados.

--------------------------------------------------------------------------------------------------------

2. (15 pontos) O TAD Equipe representa uma equipe composta por até MAX jogadores. O atributo n
indica quantos jogadores a equipe possui no momento. Para o TAD Equipe, desenvolva:

(a) (5 pontos) A operação void novoJogador(string nome, int gols); que cria dinamicamente
um novo Jogador com o nome e a quantidade de gols dos parˆametros, salva o ponteiro para este
jogador no vetor jogadores no  ́ındice n, e incrementa o valor de n. Caso a equipe esteja completa
(vetor jogadores cheio), a opera ̧c ̃ao deve retornar sem fazer nada.

(b) (5 pontos) A operação string nomeArtilheiro(); que retorna o nome do jogador com maior
quantidade de gols na equipe. Em caso de empate, retornar a primeira ocorrência.

(c) (5 pontos) O destrutor, que libera a mem ́oria alocada dinamicamente para todos os jogadores.

--------------------------------------------------------------------------------------------------------

3. (20 pontos) Considere matrizes m ×n de elementos inteiros, com m ≥ 1 linhas e n ≥ 2 colunas, na qual
somente os elementos das colunas de  ́ındice  ́ımpar podem ser diferentes de zero. A matriz A abaixo  ́e
um exemplo, para m = 3 linhas e n = 5 colunas.

0 a01 0 a03 0
0 a11 0 a13 0
0 a21 0 a23 0

O TAD MatrizListra representa esse tipo de matriz, armazenando apenas os elementos n ̃ao nulos numa
representa ̧c ̃ao linear com um  ́unico vetor (vet). Para este TAD, desenvolver:

(a) (4 pontos) O construtor, que recebe as dimens ̃oes m e n como parˆametros e aloca dinamicamente a
menor quantidade poss ́ıvel de mem ́oria para armazenar apenas os elementos n ̃ao nulos desta matriz.

(b) (2 pontos) O destrutor, que libera toda a mem ́oria alocada dinamicamente.

(c) (2 pontos) A opera ̧c ̃ao bool ehQuadrada(); que retorna verdadeiro se a matriz for quadrada ou
falso caso contr ́ario.

(d) (7 pontos) As opera ̧c ̃oes int get(int i, int j); e void set(int i, int j, int val); para
acessar e alterar os elementos da matriz. A opera ̧c ̃ao get deve imprimir uma mensagem de erro e
finalizar a execu ̧c ̃ao do programa na tentativa de acessar posi ̧c ̃oes inv ́alidas na matriz. A opera ̧c ̃ao
set deve imprimir uma mensagem de erro na tentativa de alterar posi ̧c ̃oes inv ́alidas na matriz. A
opera ̧c ̃ao set tamb ́em deve imprimir uma mensagem de erro na tentativa de atribuir valor diferente
de zero aos elementos das colunas de  ́ındice par da matriz. Vocˆe pode criar fun ̧c ̃oes auxiliares se
achar necess ́ario.

(e) (5 pontos) A opera ̧c ̃ao MatrizListra* criaCopia(); que aloca dinamicamente uma nova matriz,
copia os valores da matriz atual para a nova matriz e retorna o ponteiro para a nova matriz. Otimize
sua implementa ̧c ̃ao copiando apenas os valores n ̃ao nulos da matriz.