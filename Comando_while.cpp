#include <iostream>
using namespace std;

int main() {

    int n;
    n = 0;

    while(n < 10) {     // 'while' significa enquanto
        cout << n <<"\n";
        // n++;        // incremento o valor de 'n' para evitar 'loop' infinito
        cin >> n;       // 'cin' busca o valor de 'n' digitado no teclado
    }

    cout << "\nRotina finalizada...";

    return 0;

}