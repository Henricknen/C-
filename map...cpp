#include <iostream>
#include <map>      // incluindo a biblioteca 'map'
using namespace std;

int main() {

    map<int, string>prod;       // definição de tipo 'int' para chave  e tipo 'string' para valor
    map<int, string>:: iterator itmap;      // criação de 'interator' chamado itmap

    prod.insert(pair<int, string>(1, "Mouse"));     // 'insert' inseri dados com 'chave' e valor'
    prod.insert(pair<int, string>(2, "Monitor"));
    prod.insert(pair<int, string>(3, "Teclado"));
    prod.insert(pair<int, string>(4, "cx. som"));
    prod.insert(pair<int, string>(5, "cx. Gabinete"));
    prod.insert(pair<int, string>(6, "Camera"));

    // prod.erase(20);      // 'erase' apaga o valor da chave especificada entre '( )'
    // prod.clear();

    itmap = prod.find(3);         // 'interator' recebe a pesquiza 'find' da chave 30
    if(itmap == prod.end()) {   // verificando se encontrou o produto ou não
        cout << "Produto não encontrado" << endl;
    } else {
        cout << "Produto em estoque " << endl;
        cout << "Codigo: " << itmap-> first << " Produto: " << itmap-> second << endl;        // imprimindo informações do produto
    }

    // for(auto it: prod) {
    //     cout << it.first << " - " << it.second << endl;
    // }

    return 0;

}