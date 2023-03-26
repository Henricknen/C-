#include <iostream>
#include <vector>
using namespace std;

int soma(int n1, int n2) {      // função soma do tipo 'int'
    return n1 + n2;
}

string programando() {      // função programando do tipo 'string'
    return "C++";
}

auto somaa(double n1, double n2)-> double {      // função soma definida com retorno 'auto' e irá retorna um 'double'
    return n1 + n2;
}

int main() {

    vector <int> v {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};       // declaração do 'vector' v ultilizando método de iniçialização 'uniforme'

    for(auto it = v.begin(); it != v.end(); it++) {      // com 'auto' não é necessario definir o tipo do iterator 'vector <int> :: iterator' basta ultilizar o 'auto'
        cout << *it << endl;
    }
    cout << "----------------------" << endl;

            //auto  num = 10;     // 'auto' é uma forma de definir uma variável que pode ser de qualquer 'tipo'
                //auto nome = "Luis henrique s f";
                    //auto valor = 10.5;

    auto res = soma(10, 5);      // variável 'res' reçebe o retorno da função 'soma'
    cout << res << endl;
    cout << "----------------------" << endl;

    auto ress = programando();
    cout << ress << endl;
    cout << "----------------------" << endl;

    auto resss = somaa(10.3 , 20.5);
    cout << resss << endl;

    return 0;

}