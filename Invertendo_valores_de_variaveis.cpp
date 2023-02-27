#include <iostream>
using namespace std;
int main() {

    int num = 10;

    // num = num * -1;     // método tradiçional para fazer inversão

    cout << -num << "\n\n";     // o perrador '-' na frente da variável no momento da impressão inverte ela, mas não grava o valor inbertido na variável

    num = -num;     // 'num' recebe o proprio 'num' invertido
    cout << num << "\n\n";

    return 0;
}