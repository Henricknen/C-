#include <iostream>
using namespace std;

int main() {

    int x[10]{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};       // vetor 'x' com 10 posições

  /*for(int i = 0; i < 10; i++) {       // percorrendo e imprimindo todos elementos do vetor 'x' ultilizando 'for'
        cout << x[i] << endl;
    } */
    
 /*for(int i = 0; i < sizeof(x) / 4; i++) {        // 'sizeof' indica o tamanho em 'bytes'
        cout << x[i] << endl;
    } */

    for(int i: x) {     // variável 'i' que receber´a os elementos da coleção 'x' isto é um 'for' com 'base em intervalo'
        cout << i << endl;
    }

    return 0;

}