#include <iostream>
using namespace std;

void imp(string txt = "L.H.S.F.");       // prototipando e atribuindo um valor 'default' padrão 'L.H.S.F.' para o argumento 

int main() {

    // imp("Luis Henrique S F");       // chamando a função 'imp' com a string 'Luis Henrjique S F' para o agumento 'txt'
    imp();      // omitindo o argumento ai será apresentado o valor 'default' padrão

    return 0;

}

void imp(string txt) {      // função que faz uma impressão na tela com argumento de entrada 'txt' do tipo string
    cout << "\n" << txt << "\n";
}