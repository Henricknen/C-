#include <iostream>
#include <vector>
using namespace std;


int main() {

    register int cont;      // declarando 'cont' com register para que preferêncialmente está variavel seja armazenda no registrador

    for(cont = 0; cont <= 10; cont++) {
        cout << cont << endl;
    }

    vector <int> v {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};       // declaração do 'vector' v ultilizando método de iniçialização 'uniforme'

    for(auto it = v.begin(); it != v.end(); it++) {      // com 'auto' não é necessario definir o tipo do iterator 'vector <int> :: iterator' basta ultilizar o 'auto'
        cout << *it << endl;
    }

    return 0;

}