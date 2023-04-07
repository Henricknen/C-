#include <iostream>
#include <memory>       // importando biblioteca 'memory' para tarbalha com ponteiros inteligentes

using namespace std;

int main() {

    // int *pnum = new int();   // declaração de ponteiro do tipo 'int' e alocando na memória
    // *pnum = 10;    // ponteiro 'pnum' apontando para valor 10
    // cout << *pnum << " - " << &pnum << endl;     // fazendo a impressão do valor que 'pnum' pponteiro está apontando e para o endereço que está armazenado dentro da variável
    // delete pnum;

    // unique_ptr<int>pnum(new int(20));      // 'unique_ptr' é um tipo de 'ponteiro inteligente' que diz que este ponteiro é um ponteiro unico
    // cout << *pnum << " - " << &pnum << endl;     // fazendo a impressão do valor que 'pnum' pponteiro está apontando e para o endereço que está armazenado dentro da variável

    shared_ptr<int>pnum(new int);       // 'shared_ptr' é um 'ponteiro inteligente' compartilhado
    shared_ptr<int>pnum2 = pnum;
    *pnum = 30;
    cout << *pnum << " - " << &pnum << endl;

    string* str = new string("Developer L. H. S. F.");      // ponteiro string 'str' iciçializado com texto
    cout << *str << " - tamanho: " << str-> size() << endl;
    delete str;

    return 0;
}