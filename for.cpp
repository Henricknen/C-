#include <iostream>
using namespace std;

int main() {
    int x, y, z;       // declando mais de uma variável
    for(int tmp = 0; tmp < 1000000000; tmp++);      // for sem 'corpo' ultilizado para dar um tempo
    //     iniçialização   ; codição; incremento/ decremento
    for(x = 0, y = 1, z = 0; x <= 10; x++, y +=2, z +=2) {      
        cout << x << " - ";     // 'x' por ser iniçiado 'x = 0' será par irá incrementar de 1 em 1
        cout << y << " - ";         // 'y' por iniçiada 'y = 1' será impar e seu contador contar de 2 em 2
        cout << z << "\n";              // 'z' será par mas será contado de 2 em 2
    }

    return 0;

}