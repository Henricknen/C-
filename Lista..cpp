#include <iostream>
#include <list>     // adiçionando o arquivo de cabeçãlho 'list'
using namespace std;

int main() {

    list<int> praticando, lista;       // declarando lista chamada 'praticando' e outra chamada 'lista'
    int tam;
    list<int> :: iterator it;       // crirando 'interator' chamdo it

    lista.push_front(9);        // adiçionando valores a lista 'lista'
    lista.push_front(9);
    lista.push_front(9);
    lista.push_front(9);

    tam = 10;       // variável 'tam' armazena o tamanho da lista
    for(int i = 0; i < tam; i++) {     // for para colocar valores na lista
        praticando.push_front(i);   // inserindo elementos no iniçio 'front' da lista
    }

    it = praticando.begin();
    advance(it, 3);      // 'advance' adiçionará na terçeira posição
    praticando.insert(it, 0);// inserindo 'insert' o valor 0 na posição 3
    praticando.erase(--it);        // 'erase' remove um elemento depois, '--' pré-decrementa o 'erase'

    // praticando.clear();      // método 'clear' esvazia a lista toda

    praticando.merge(lista);      // 'merge' mescla as listas 'praticando' com a 'lista'

    cout << "Tamanho da lista: " << praticando.size() << "\n\n";        // imprime o tamanho da lista

    tam = praticando.size();        // 'size' retorna o tamanho da lista
    for(int i = 0; i < tam; i++) {     // for que irá imprimir os valores da lista
        cout << praticando.front() << "\n";
        praticando.pop_front();     // depois de imprimir o elemento que está na frente da lista ele é retirado com 'pop'
    }

    cout << "Tamanho da lista: " << praticando.size() << "\n\n";
    return 0;

}