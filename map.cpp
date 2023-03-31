#include <iostream>
#include <map>      // incluindo a biblioteca 'map'
using namespace std;

int main() {

    map<int, string>prod;       // definição de tipo 'int' para chave  e tipo 'string' para valor

    prod[0] = "Mouse";       // inserindo elementos no container 'map'
    prod[1] = "Teclado";
    prod[2] = "Monitor";
    prod[3] = "Cx.Som";

    for(int i =0; i < 4; i++) {     // ultiizando 'for' tradiçional para imprimiro os produtos
            cout << prod[i] << endl;
    }

    return 0;

}