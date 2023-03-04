#include <iostream>
using namespace std;

int main() {
    
    int vetor[5] = {10, 20, 30, 40, 50};     // por adiçionar diretamente os valores na declaração é necessario indicar o tamanho do 'vetor'
    // int vetor[5];      // declaração basica de um 'array' de 5 posições
    int i;

    //  vetor[0] = 10;         // para  adiçionar valores em cada posição do array é necessario indicar o 'nome do array, posição e o valor' que será adiçionado
    //  vetor[1] = 20; 
    //  vetor[2] = 30;
    //  vetor[3] = 40;
    //  vetor[4] = 50;

    // for(i = 0; i < 5; i++) {        // 'for' irá fazer a impressão de todos os elementos do array
    //     cout << vetor[i] << "\n";        // cout com  de indiçe i 'vetor[i]' irá imprimir na tela o valor da posição de cada indiçe 'i'
    // }

    for(i = 0; i < sizeof(vetor)/ 4; i++) {     // 'sizeof' retorna o tamanho do tipo em 'bytes', indicado dentro do parênteses '()'
        cout << vetor[i] << "\n"; 
    }

    return 0;

}