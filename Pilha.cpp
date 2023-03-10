#include <iostream>
#include <stack>        // importando biblioteca 'stack' para trabalhar com pilhas
using namespace std;

int main() {

    stack <string> cartas;       // criação da 'pilha' cartas

    cartas.push("Rei de Copas");     // método 'push' insere elementos dentro de uma pilha
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");     // a carta 'Rei de Paus' é a que está no topo da pilha pois foi enseida por último

    // if(cartas.size() == 0) {        // se 'size' for igual a 0 a pilha está vazia
    if(cartas.empty()) {        // ultilizando o metodo 'empty' para fazer verificação se a pilha está vazia ou não
        cout << "Pilha vazia\n\n";
    } else {
        cout << "Pilha com cartas\n\n";
    }

    cout << "Tamanho da pilha: " << cartas.size() << "\n";      // método 'size' adiçiona o tamanho da pilha

    while(!cartas.empty()) {        // enquanto 'cartas' não for vazia
        cout << "Carta do topo: " << cartas.top() << "\n";      // 'top' retorna o elemento que está no topo
            cartas.pop();       // excluindo todos elementos da pilha
    }

    cartas.pop();       // método 'pop' retira elemento do topo da pilha

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "nova carta do topo: " << cartas.top() << "\n";

    return 0;

}