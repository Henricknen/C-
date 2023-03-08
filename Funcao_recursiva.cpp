#include <iostream>
using namespace std;

void contador(int num, int cont = 0);       // prototipando com argumentos 'num' e 'cont' iniçiado em 0

int main() {

    contador(20);       // chamando a função

    return 0 ;

}

void contador(int num, int cont) {       // função 'contador' com dois parâmetros fará uma contagem
    cout << cont << "\n";       // fazendo a impressão do valor de 'cont'
    if(num > cont) {        // condição de parada
        contador(num, ++cont);      // chamando a função novamente e incementando o valor de 'cont'
    }
}