#include <iostream>
using namespace std;

int main() {

    int *p;     // criação de ponteiro do tipo 'int' chamado 'p'
    int vetor[10];      // criando 'array' de tamanho 10

    p = &vetor[0];      // atribuindo ao ponteiro 'p' o endereço de memória do primeiro elemento do vetor
    cout << "\n" << p << "\n";      // imprimindo endereço do primeiro elemento do ponteiro

    *(p += 1);       // fazendo incremento para proxima posição
    cout << "\n" << p << "\n";      // imprimindo o endereço da segunda posição

    p = &vetor[2];
    cout << "\n" << p << "\n";      // imprimindo o endereço da terçeira posição

    p = &vetor[3];
    *p = 10;        // atribuindo valor a quarta posição do ponteiro
    cout << "\n" << vetor[3] << "\n";

    return 0;

}