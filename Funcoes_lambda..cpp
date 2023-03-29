#include <iostream>
#include <vector>       // ultilizando 'vector' para passar mais valores
using namespace std;

int main() {

    int x1, x2, x3, x4;     // lista de variáveis externas
    x1 = 34;        // iniçializando valoreas das variáveis
    x2 = 56;
    x3 = 6;
    x4 = 10;

    auto soma = [x1, x2, x3, x4]()-> int{      // 'lambda' soma ultilizando 'captura' de variavesi fará a soma
        return x1 + x2 + x3 + x4;       // retornado a soma 
    };


    auto maior = [](vector <int> n)-> int {      
        auto m = 0;
        for(int x: n) {
            m = (m > x) ? m: x;
        }

        return m;
    };

    cout << maior({8, 12 ,45, 67, 4, 67, 32, 67}) << endl;

    cout << soma() << endl;

    return 0;

}