#include <iostream>
#include <utility>      // importando biblioteca 'ultility'
using namespace std;

int main() {

    const int tam = 4;

    pair <int, string> par[tam];        // definição dos tipos de dados que serão usados no 'par'

    par[0] = make_pair(10, "Luis");         // ultilizando 'make_pair'
    par[1] = make_pair(20, "Henrique");
    par[2] = make_pair(30, "Silva");
    par[3] = make_pair(40, "Ferreira");

    for(int i = 0; i < tam; i++) {      // ultilizando 'for' para fazer a impressão de todos de uma vez
        cout << par[i].first << " - " << par[i].second << endl;
    }

    return 0;

}