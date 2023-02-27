#include <iostream>
using namespace std;

int main() {

    // n1 = n1 + 10;    n1 += 10;        // forma tradiçional, inclementando 1 na variável 'n1'
    // n1 = n1 - 10;    n1 -= 10;     // forma rapida de fazer o incremento
    // n1 = n1 * 10;    n1 *= 10;
    // n1 = n1 / 10;    n1 /= 10;
    // n1++;            n1--;      // '++' indica que está sendo adiçionado 1 a variável 'n1' e '--' indica que está sendo decrementado 1 da variável
    // n1++;            ++n1;   // 'n++' é chamado de pós incremento e '++n' hmando de pré incremento

    int n1 = 10;     // criando variável 'n1' e iniçialização com valor 10

    // cout << n1++ << "\n\n";     // vai imprimir o valor atual pos primerio ele usa o valor da variável e depois faz o incremento
    cout << ++n1 << "\n\n";         // primeiro a variável será incrementada e depois imprimida

    return 0;

}
