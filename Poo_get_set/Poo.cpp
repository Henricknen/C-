#include <iostream>
#include "classes.h"
using namespace std;

int main() {

    Veiculo *v1 = new Veiculo(1);       // instançiando novo veículo
    Veiculo *v2 = new Veiculo(2);
    Veiculo *v3 = new Veiculo(3);
    
    v1 -> setLigado(1);     // '1' liga veiculo
    v2 -> setLigado(0);         // '0' desliga veiculo
    v3 -> setLigado(1);

    cout << v1 -> getVelMax() << endl;      // chamando método 'VelMax'
    cout << v2 -> getVelMax() << endl;
    cout << v3 -> getVelMax() << endl;

    if(v1 -> getLigado()) {
        cout << "Veiculo 1 esta ligado" << endl;
    } else {
        cout << "Veiculo 1 esta desligado" << endl;
    }

    if(v2 -> getLigado()) {
        cout << "Veiculo 2 esta ligado" << endl;
    } else {
        cout << "Veiculo 2 esta desligado" << endl;
    }

    if(v3 -> getLigado()) {
        cout << "Veiculo 3 esta ligado" << endl;
    } else {
        cout << "Veiculo 3 esta desligado" << endl;
    }

    return 0;

}

//	;
//		: