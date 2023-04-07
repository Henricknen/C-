#include <iostream>
#include <memory>       // importando biblioteca 'memory' para tarbalha com ponteiros inteligentes

class Carro {        // criação de classe 'Carro'
public:
    int vel = 0;     // propriedades
    int getVel() {        // método que retorna a veloçidade
        return vel;
    } 
};

using namespace std;

int main() {

            // declarando classe ultilizando 'smart pointer'
        unique_ptr<Carro> c1(new Carro);
        cout << "Velocidade: " << c1-> getVel() << endl;


            // declarando classe 'Carro' na forma tradiçional
    // Carro *c1 = new Carro();       // elemento 'c1' do tipo 'Carro' com notação de ponteiro '*'
    // cout << "Velocidade: " << c1-> getVel() << endl;        //imprimindo veloçidade com método 'getVel'
    // delete c1;

            // smart pointer
    unique_ptr<string> str(new string("Fullstack"));       // com a anotação 'unique_ptr'não precisa determinar o tipo
    cout << *str << " - tamanho da sttring: " << str-> size() << endl;

            // ponteiro comum
    // string* str = new string("Developer L. H. S. F.");      // ponteiro string 'str' iciçializado com texto
    // cout << *str << " - tamanho: " << str-> size() << endl;
    // delete str;

    return 0;
}

// ultilizano 'smartPointer'