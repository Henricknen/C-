#include <iostream>
#include "Aviao.h"      // incluindo o arquivo de cabeçalho 'Aviao.h'
using namespace std;

int main() {

    Aviao *av1 = new Aviao(2);      // instançiando novo 'objeto' ja informado seu tipo '(1)'
    Aviao *av2 = new Aviao(3);
    Aviao *av3 = new Aviao(1);

    av1 -> imprimir();      // chamando método 'imprimir'
    av2 -> imprimir();
    av3 -> imprimir();

    return 0;

}