#include <iostream>
#include <memory>

class Carro {       // criação da classe 'Carro'
public:
    int velMax;     // membros 'public'
    int potencia;
    const char* nome;

    Carro(const char* n, int p): nome(n), potencia(p) {       // método construtor iniçializado com nome 'char* n' e potençia 'int p' do carro / : nome(n), potencia(p) é uma 'lista de iniçialização'
        this-> nome = n;        // armazenando nome 'n' passado na variável 'nome'
        this-> potencia = p;        // armazenando potênçia 'p' passada na variável 'potênçia'
        if(p < 100) {
            this-> velMax = 120;
        } else if(p < 200) {
            this-> velMax =200;
        } else {
            this-> velMax = 350;
        }
    }
};

using namespace std;

int main() {

    Carro *c1 = new Carro("Porche", 300);        // instançiando um objeto da classe 'Carro' da forma 'tradiçional'
    cout << c1-> nome << " - " << c1-> potencia << " - " << c1-> velMax << endl;        // imprimindo 'nome' e 'potênçia'
    delete c1;      //liberando o espaço reservado pra esse objeto
    
    Carro c2{"Ferrari", 350};       // ultilzando 'lista de iniçialização uniforme'
    cout << c2 .nome << " - " << c2 .potencia << " - " << c2 .velMax << endl;

    unique_ptr<Carro>c3(new Carro{"Lamborguini", 420});     // ultilizando ponteiro inteligente 'smart pointer' 
    cout << c3-> nome << " - " << c3-> potencia << " - " << c3-> velMax << endl;

    return 0;

}