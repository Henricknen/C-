#include <iostream>
#include "classes.h"
using namespace std;

int main() {

    Base1 *obj1 = new Base1();        // instançiando objetos
    Base2 *obj2 = new Base2();
    HERd *obj3 = new HERd();        // criação do objeto que herda a classe 'basse1' e 'Base2'

    obj1 -> impBase1();     // chamando métodos de impressão 'impBase'
    obj2 -> impBase2();

    obj3 -> impBase1();
    obj3 -> impBase2();
    

    return 0;

}