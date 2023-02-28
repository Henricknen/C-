#include <iostream>
using namespace std;

int main() {

    int num1 = 10;
    int num2= 70;
    int sol = 1;        // '1' eqivale a 'true'

    if(num1 > num2) {
        cout << "Resultado VERDADEIRO";
    } else {
        cout << "Resultado FALSO";
    }

    if(sol) {       // se 'sol' for 'true' cai nesta execução
        cout << "Ir a praia";
    } else {        // se 'sol' for ''false' cai nesta execução
        cout << "Ir ao cinema";
    }

    return 0;

}