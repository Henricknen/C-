#include <iostream>
using namespace std;

extern int num;        // declaração da variável 'num' do tipo 'int' e 'extern' define a variável 'num' como externa

int valor = 10;     // iniçializando variável 'valor' com 10

void impNum() {     // função que irá imprimir o valor de 'num'
    cout << num << endl;
}

