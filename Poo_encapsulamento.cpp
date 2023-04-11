#include <iostream>
#include <memory>

class Carro {
private:
    int velMax;     // por ser um membro 'private' velMax só pode ser acesssada dentro da classe

    void setVelMax(int vm) {        // método 'set' para 'alterar' um valor com parâmetro 'vm' protegido por 'private'
        this-> velMax = vm;
    }

public:
    int potencia;
    const char* nome;



    int getVelMax() {       // método 'get' para 'obter' o valor
        return this-> velMax;
    }

    Carro(const char* n, int p): nome(n), potencia(p) {
        if(p < 100) {
            this-> setVelMax(120);
        } else if(p < 200) {
            this-> setVelMax(200);
        } else {
            this-> setVelMax(350);
        }
    }
};

using namespace std;

int main() {

    unique_ptr<Carro>c1(new Carro{"Lamborguini", 420});
    cout << c1-> nome << " - " << c1-> potencia << " - " << c1-> getVelMax() << endl;

    Carro c2{"Mustang", 380};
    cout << c2. nome << " -ff " << c2. potencia << " - " << c2. getVelMax() << endl;

    return 0;

}