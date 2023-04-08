#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int>n{1, 2, 3, 4, 5, 6, 7, 8, 9};        // vector de inteiros chamado 'n' ultilizando iniçialização uniforme '{}'
    // vector<int>:: iterator it;      // declarando do 'iterator' chamado 'it'
    // for(it = n.begin(); it != n.end(); it++) {      // fazendo a impressão de todos estes elementos do 'vector' ultilizando 'for com interator'
     
    for(auto it = n.begin(); it != n.end(); it++) {      // ultilizando o 'auto' não é necessario declarar o 'iterator'
        cout << *it << endl;        // fazendo leitura dos elementos do 'vector'
    }

}