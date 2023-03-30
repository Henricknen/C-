#include <iostream>
#include <utility>      // importando biblioteca 'ultility'
using namespace std;

int main() {

    const int tam = 4;

    pair <int, string> par[tam];        // definição dos tipos de dados que serão usados no 'par'

    par[0].first = 100;     // criação de 'pares' em formato de vetor
    par[0].second = "Luis";

    par[1].first = 200;         // membros 'first' e 'second' controla as posições
    par[1].second = "Henrique";

    par[2].first = 300;
    par[2].second = "Silva";

    par[3].first = 400;
    par[3].second = "Ferreira";

    cout << par[0].first << " - " << par[0].second << endl;
    cout << par[1].first << " - " << par[1].second << endl;
    cout << par[2].first << " - " << par[2].second << endl;
    cout << par[3].first << " - " << par[3].second << endl;

    return 0;

}