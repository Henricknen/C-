#include <iostream>
using namespace std;

int main() {

    auto maior = [](int n1, int n2)-> int {      // '[]'é a área de captura de variáveis e define uma função 'lambda' '()' é a área de captura de parâmetros e as '{}' é o corpo da função
        return(n1 > n2) ? n1: n2;       // ultiizando 'operador ternário' se a expressão for positiva será retornado 'n1' se falsa 'n2'
    };

    cout << maior(8, 6) << endl;    // chamada da função 'maior' com os argumentos que serão testado

    return 0;

}