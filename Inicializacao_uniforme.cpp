#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct Pessoa {     // criação de 'sruct' Pessoa
    string nome;
    int idade;
};

class Veiculo {     // classe  com parâmetro publico
public:
    int tipo;
    string nome;
};

int main() {

    int num{10};       // iniçializando variável 'num'  com valor 10 ultilizando chaves'{ }'
    string nome {"Luis henrique s f"};
    vector <int> valores{1, 2, 3, 4, 5};        // iniçializando 'vector'
    map <string, string> capitais{{"MG", "Belo Horizonte"}};     // iniçialização '{ }'map' reçebe dois elementos

    Pessoa p1{"Luis Henrique S F", 31};      // iniçializando 'struct' e atribuindo valor no mesmo

    Veiculo v1{1, "Ferrari"};

    cout << num << endl;

    cout << nome << endl;
    
    for(map <string, string>:: iterator it = capitais.begin(); it != capitais.end(); it++) {
        cout << it-> first << "-" << it-> second << endl;
    }


    return 0;

}