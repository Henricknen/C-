#include <iostream>
#include <stack>        // importando biblioteca 'stack' para trabalhar com pilhas
using namespace std;

int main() {

    stack <string> cartas;       // criação da 'pilha' cartas

    cartas.push("Rei de Copas");     // método 'push' insere elementos dentro de uma pilha
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");     // a carta 'Rei de Paus' é a que está no topo da pilha pois foi enseida por último

    cout << "Tamanho da pilha: " << cartas.size() << "\n";      // método 'size' adiçiona o tamanho da pilha

    cout << "Carta do topo: " << cartas.top() << "\n";      // 'top' retorna o elemento que está no topo

    cartas.pop();       // método 'pop' retira elemento do topo da pilha

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "nova carta do topo: " << cartas.top() << "\n";

    return 0;

}