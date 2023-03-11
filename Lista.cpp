#include <iostream>
#include <list>     // adiçionando o arquivo de cabeçãlho 'list'
using namespace std;

int main() {

    list<int> praticando;       // declarando uma lista
    int tam;
    list<int> :: iterator it;       // crirando 'interator' chamdo it

    // tam = 10;       // variável 'tam' armazena o tamanho da lista
    // for(int i = 0; i < tam; i++) {     // for para colocar valores na lista
    //     praticando.push_front(i);   // inserindo elementos no iniçio 'front' da lista
    // }

    // it = praticando.begin();
    // advance(it, 5);     // ultilizando comando 'advance' para avançar o interartor 'it' em 5 posições
    // praticando.insert (it, 0);      // 'insert' enseri o valor especificado dentro dos '()' na posição determinada

    praticando.push_front(8);
    praticando.push_front(3);
    praticando.push_front(1);
    praticando.push_front(9);
    praticando.push_front(2);
    praticando.push_front(7);
    praticando.push_front(4);
    praticando.push_front(5);
    praticando.push_front(0);
    praticando.push_front(6);

    cout << "Tamanho da lista: " << praticando.size() << "\n\n";        // imprime o tamanho da lista

    praticando.sort();      // método 'sort' faz a ordenação se a lista estiver desordenada
    praticando.reverse();       // método 'reverse' inverte os valores

    tam = praticando.size();        // 'size' retorna o tamanho da lista
    for(int i = 0; i < tam; i++) {     // for que irá imprimir os valores da lista
        cout << praticando.front() << "\n";
        praticando.pop_front();     // depois de imprimir o elemento que está na frente da lista ele é retirado com 'pop'
    }

    return 0;

}