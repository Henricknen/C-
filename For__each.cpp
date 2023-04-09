#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int>n{0, 1, 2, 3,4, 5, 6, 7, 8, 9};

    for_each(n.begin(), n.end(), [](int num) { // 'for_each' é como se fosse uma função que precisa de parâmetros, 'ponto inicial' um 'ponto final' e uma função 'lambda' que vai 'operar' com os dados desta estrutura
        num += 10;      // somando 10 em cada um dos elementos que foi passado para a função
        cout << num << endl;
    });

    cout << endl;

    for_each(n.begin(), n.end(), [](int num) { // 'for_each' simplemente ira imprimir os elementos
        cout << num << endl;
    });
}