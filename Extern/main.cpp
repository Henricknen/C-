#include <iostream>
using namespace std;

void impNum();      // prototipando a função 'impNum'

int num{50};    // variável 'num' com iniçialização uniforme de valor 50
extern int valor;       // 'extern' indica que está variável 'valor está em um arquivo externo

int main() {

    impNum();  // chamada da função
    cout << valor << endl;

    return 0;

}