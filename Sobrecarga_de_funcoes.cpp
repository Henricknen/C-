#include <iostream>
using namespace std;

void soma(int n1, int n2);      // 'prototipando' as funções
void soma();

int main() {

    soma(20, 30);     // chamada da função 'soma' com dois argumentos
    soma();     // chamada da fução sem argumentos

    return 0;

}

void soma(int n1, int n2) {     // função 'soma' com argumentos de entrada 'n1' e 'n2'
    int re;
    re = n1 + n2;
    cout << "\nSoma de " << n1 << " com " << n2 << " = " << re << "\n";
}

void soma() {       // função soma do tipo 'void' sem retorno
    int n1, n2, re;         // variáveis
    n1 = 10;
    n2 = 20;
    re = n1 + n2;
    cout << "\nSoma de " << n1 << " com " << n2 << " = " << re << "\n";
}