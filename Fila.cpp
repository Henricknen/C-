#include <iostream>
#include <queue>       // adiçionando biblioteca 'queue'
using namespace std;

int main() {

    queue <string> cartas;      // ultilizando 'queue' para declarar uma uma fila de string chamada 'cartas'

    cartas.push("Rei de Copas");        // método 'push' insere elementos na fila
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da filha: " << cartas.size() << "\n";      // método 'size' mostra o tamanho da fila
    cout << "Primeira carta: " << cartas.front() << "\n";   // imprimindo a primeira carta ultilizando o método 'front'
    cout << "Útima carta: " << cartas.back() << "\n\n";        // imprimindo a última carta ultilizando o método 'back'

    while(!cartas.empty()) {        // enquanto 'while' pilha 'cartas' não for vazia
        cout << "Carta atual: " << cartas.front() << "\n";       // método 'front' retorna a carta que está na frente da fila
        cartas.pop();       // 'pop' retira a carta da frente depois que ela for impressa na tela
    }

    return 0;

}