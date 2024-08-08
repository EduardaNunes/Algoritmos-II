// Faça um algoritmo para somar duas matrizes quadradas
// M1 e M2 de ordens n1 e n2, respectivamente. A soma só
// deve ser realizada se n1 for igual a n2. Analise o algoritmo
// e calcule a soma das frequências para os diferentes fluxos
// de execução possíveis.

#include <iostream>

using namespace std;

int main(){
    int n1, n2;                                                                             // 1

    cout << "Defina a ordem da 1ª matriz: " << endl;                                        // 1
    cin >> n1;                                                                              // 1

    cout << "Defina a ordem da 2ª matriz: " << endl;                                        // 1
    cin >> n2;                                                                              // 1

    while(n1 != n2){                                                                        // ??????????
        cout << "As ordens das matrizes devem ser iguais, defina n2 novamente" << endl;
        cin >> n2;
    }

    int m1[n1][n1], m2[n2][n2];                                                             // 1

    cout << "Preencha a 1ª matriz: " << endl;                                               // 1

    for(int i = 0; i < n1; i++){                                                            // n+1
        for(int j = 0; j < n1; j++){                                                        // n²+1
            cin >> m1[i][j];                                                                // n²
        }
    }

    cout << "Preencha a 2ª matriz: " << endl;                                               // 1

    for(int i = 0; i < n2; i++){                                                            // n+1
        for(int j = 0; j < n2; j++){                                                        // n²+1
            cin >> m2[i][j];                                                                // n²
        }
    }

    int m3[n1][n1];                                                                         // 1

    cout << "O resultado da soma das matrizes é: " << endl;                                 // 1

    for(int i = 0; i < n1; i++){                                                            // n+1
        for(int j = 0; j < n1; j++){                                                        // n²+1
            m3[i][j] = m1[i][j] + m2[i][j];                                                 // n²
            cout << m3[i][j] << " ";                                                        // n²
        }
        cout << endl;                                                                       // n
    }

    return 0;                                                                               // Frequência: 7n² + 4n + 16
}                                                                                           //