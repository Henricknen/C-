#include <iostream>
using namespace std;

int main() {

    int num1;
 
    num1 = 9;

    if(num1 > 3 && num1 < 6) {        // '&&' é o operador and, a condição será verdadeira quando todos os testes forem verdadeiros
        cout << "\nValor aceito\n";
    } else {
        cout << "\nValor nao aceito\n";
    }

    int num2;

    num2 = 5;

    if(num2 > 3 || num2 < 8) {        // '||' é o operador or, que indica quando um dos dois teste for verdadeiro a codição será verdadeira
        cout << "\nValor aceito\n";
    } else {
        cout << "\nValor nao aceito\n";
    }

    int num3;

    num3 = 12;

    if((num3 >= 6 || num3 >= 9) || (num3 >= 8 && num3 <= 12)) {
        cout << "\nValor aceito\n";
    } else {
        cout << "\nValor nao aceito\n"; 
    }

    int num4;

    num4 = 0;
    // num4 == 0; / if(!num4)
    // num4 == 1; / if(num4)
    if(!num4) {      // '1' é true e '0' é false '!' equivale a 'not'
        cout << "\nIr a praia\n";
    } else {
        cout << "\nFicar em casa\n";
    }

    return 0;

}