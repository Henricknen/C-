#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string>produtos= {"teclado", "gabinete", "monitor", "caixa de som"};

    vector<string>:: iterator it;      // declaração do 'interator'

    it = produtos.begin();      // método 'begin' retorna o primeiro elemento da coleção
    //it = produtos.end() - 1;     // método 'end' aponta para o último elemento

    //advance(it, 1);      // função 'advance' avança para posições determinada do vector

    cout << *next(it, 2) << endl;       // 'next' é usado direto no 'cout' pois ele ja retorna a posicão
    //cout << *prev(it, 1) << endl;   // 'prev' é semelhante ao 'next' mais ele imprime os elementos da direia para esquerda

    //cout << produtos[0] << endl;        // imprimido o 'primeiro' elemento do vector 'produtos'

    return 0;

}