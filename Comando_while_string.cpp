#include <iostream>
using namespace std;

int main() {

    int cont;

    cont = 0;       // 'cont' iniçializada com 0
    while(cont-- > 20) {     // da para fazer 'incremento' ou de cremento na expressão do 'while(cont--) {'
        cout << "\nLuis Henrique S F - " << cont << "\n";       // fazendo contagem de tráz pra frente
        // cont--;     // decrementando 'cont' será uma condição de parada
    }

    return 0;

}