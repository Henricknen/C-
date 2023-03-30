#include <iostream>
#include <utility>      // importando biblioteca 'ultility'
using namespace std;

int main() {

    const int tam = 4;

    pair <int, pair<string, double>> par[tam];        // definição dos tipos de dados 'int', 'string' e 'double'

    par[0] = make_pair(10, make_pair("Luis", 29));         // ultilizando 'make_pair' para novo 'par'
    par[1] = make_pair(20, make_pair("Henrique", 30));
    par[2] = make_pair(30, make_pair("Silva", 03));
    par[3] = make_pair(40, make_pair("Ferreira", 2023));

    for(int i = 0; i < tam; i++) {      // ultilizando 'for' para fazer a impressão de todos de uma vez
        cout << par[i].first << " - " << par[i].second.first << " - " << par[i].second.second << endl;
    }

    return 0;

}