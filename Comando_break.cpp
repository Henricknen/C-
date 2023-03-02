#include <iostream>
using namespace std;

int main() {

    int cont;

    cont = 0;

    while(cont < 1000) {      // condição
        cout << cont << "\n";
        if(cont == 500) {       // condição de parada
            break;      // 'break' interrompe o while sai do loop e continua a execução normal do programa
        }
        cont++;     // inseindo o contador depois do 'if' o programa fará o print do 500 completo
    }

    return 0;
    
}