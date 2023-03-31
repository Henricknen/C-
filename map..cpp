#include <iostream>
#include <map>      // incluindo a biblioteca 'map'
using namespace std;

int main() {

    map<int, string>prod;       // definição de tipo 'int' para chave  e tipo 'string' para valor

    prod[0] = "Mouse";       // inserindo elementos no container 'map'
    //prod[1] = "Teclado";
    //prod[2] = "Monitor";
   // prod[3] = "Cx.Som";

    prod.insert(pair<int, string>(0, "Mouse"));

    /*for(auto it = prod.begin(); it != prod.end(); it++) {     // ultilizando 'for' tradiçional para imprimiro os produtos
            cout << it-> first << endl;     // 'first' imprime as chaves
            cout << it-> second << endl;        // 'second' imprime os valores
    } */

    for(auto it: prod) {     // ultilização de for com 'base em intervalo'
        cout << it. first << endl;      // com base em intervalo ao invés de usar '->' usa se o '.'
        cout << it. second << endl;
    }

    return 0;

}