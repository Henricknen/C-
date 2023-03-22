#include <iostream>
#include "classes.h"        // fazendo a inclusão o arquivo de cabeçaho 'classes.h'

using namespace std;

int main() {

    Moto *v1 = new Moto();      // instançiando 'objeto' da classe 'Moto'
    Carro *v2 = new Carro();
    Tanque *v3 = new Tanque();

    cout << v1 -> rodas;
    v1 -> imp();        // chamando método 'imprimir'
    v2 -> imp();
    v3 -> imp();

    return 0;

}