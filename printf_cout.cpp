#include <iostream>
#include <stdio.h>
#include <math.h>       // incluindo biblioteca 'math.h' biblioteca matemática

using namespace std;
int main() {

    //int num = 15

    //printf("Valor de NUM %07d - ", num);       // %07d '07' indica o que estará sendo completado com seis 0 a esquerda
    //cout << "Valor de NUM em dec - " << num << "\n";
    //cout << "Valor de NUM em hexa - " << hex << num << "\n";      // 'hex' converte a variável em hexadeçimal

    float pi = M_PI;

    cout.precision(3);      // 'precision' método retorna a quantidade de casas decimais

    cout << "Valor de PI " << pi << "\n";

    return 0;

}     