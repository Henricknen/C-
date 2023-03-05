#include <iostream>
using namespace std;

int main() {

    int matriz[3][4];      // vetor 'matriz' é bidimensional de 3 linhas e 4 colunas
    int l, c;        // indiçe 'l' de linha e 'c' de coluna para façilitar a relação com a tabela

        for(l = 0; l < 3; l++) {        // 'for' vai permitir que usuário adiçione um valor na matriz
        for(c = 0; c < 4; c ++) {
            cin >> matriz[l][c];            // 'cin' permite adicionar o valor digitado na 'matriz
        }
    }

    //     for(l = 0; l < 3; l++) {        // 'for' vai fazer o preenchimento automatico da da matriz
    //     for(c = 0; c < 4; c ++) {
    //         matriz[l][c] = l;
    //     }
    // }

    // matriz[0][0] = 0;       // adiçionando valores na 'linha 0 [0] e nas colunas [0, 1, 2, 3]' da matriz
    // matriz[0][1] = 0;
    // matriz[0][2] = 0;
    // matriz[0][3] = 0;

    // matriz[1][0] = 1;       // adiçionando valores na 'linha 0 [1] e nas colunas [0, 1, 2, 3]' da matriz
    // matriz[1][1] = 1;
    // matriz[1][2] = 1;
    // matriz[1][3] = 1;

    // matriz[2][0] = 2;       // adiçionando valores na 'linha 0 [2] e nas colunas [0, 1, 2, 3]' da matriz
    // matriz[2][1] = 2;
    // matriz[2][2] = 2;
    // matriz[2][3] = 2;

    for(l = 0; l < 3; l++) {        // 'for' vai percorre o indiçe da linha 'l'
        for(c = 0; c < 4; c ++) {       // 'for' para estrutura de colunas
            cout << matriz[l][c] << " ";
        }
        cout << "\n";
    }

    return 0;
}